FROM centos:7

# Install php 7.0 as described in https://www.softwarecollections.org/en/scls/rhscl/rh-php70/
RUN yum -y install centos-release-scl
RUN yum -y install rh-php70 rh-php70-php rh-php70-php-gd rh-php70-php-mysqlnd rh-php70-php-pdo rh-php70-php-xml rh-php70-php-opcache rh-php70-php-soap rh-php70-php-mbstring rh-php70-php-xmlrpc rh-php70-php-intl && \
    yum clean all
ENV PATH="/opt/rh/rh-php70/root/usr/bin:/opt/rh/rh-php70/root/usr/sbin:$PATH"

# Install EPEL Repo and update
#RUN yum install -y http://dl.fedoraproject.org/pub/epel/epel-release-latest-7.noarch.rpm && \
#  yum repolist && yum -y update

# Install apache
RUN yum -y install httpd24 httpd24-mod_ssl
ENV PATH="/opt/rh/httpd24/root/usr/bin:/opt/rh/httpd24/root/usr/sbin:$PATH"

# Install other tools
RUN yum -y install scl-utils git mariadb-libs mariadb wget sudo python-setuptools nano vim pv && \
    yum clean all && rm -rf /var/cache/yum

# PHP and Apache config.
RUN sed -i 's,/opt/rh/httpd24/root/var/www/html,/var/www/docroot,' /opt/rh/httpd24/root/etc/httpd/conf/httpd.conf && \
    sed -i '/LoadModule http2_module modules\/mod_http2.so/d' /opt/rh/httpd24/root/etc/httpd/conf.modules.d/00-base.conf
ADD ./docker/apache-php/docker-host.conf /opt/rh/httpd24/root/etc/httpd/conf.d/docker-host.conf
ADD ./docker/apache-php/php.ini /etc/opt/rh/rh-php70/php.d/99-docker-php.ini

# Solution for https://bugzilla.redhat.com/show_bug.cgi?id=1020147
RUN sed -i -e "s/Defaults    requiretty.*/ #Defaults    requiretty/g" /etc/sudoers

# Install PHP Composer.
COPY ./docker/apache-php/getcomposer.sh /usr/local/bin
RUN chmod +x /usr/local/bin/getcomposer.sh
RUN /usr/local/bin/getcomposer.sh
ENV PATH="$PATH:/usr/local/bin:/var/www/vendor/bin"

RUN httpd -v && php -v

# Set apache user for project usage
RUN usermod --home /var/www --shell /bin/bash apache && \
    useradd -o -u 48 -g 48 -M -d /var/www www-data && \
    id apache && id www-data

# Set a custom entrypoint.
COPY ./docker/apache-php/docker-entrypoint.sh /
RUN chmod a+rx /docker-entrypoint.sh
ENTRYPOINT ["/docker-entrypoint.sh"]
CMD httpd -D FOREGROUND -e debug
WORKDIR /var/www


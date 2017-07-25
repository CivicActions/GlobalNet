FROM davenuman/bowline-web-php:latest
MAINTAINER David Numan david.numan_at_civicactions.com

# Additional Packages.
RUN apt-get update && apt-get upgrade -y && \
  apt-get -y install libapache2-mod-xsendfile unzip php5-dev make openssh-server clamav clamav-daemon && \
  pecl install xhprof-beta && \
  apt-get -y remove --purge php5-dev make && \
  a2enmod xsendfile && \
  apt-get autoclean && apt-get autoremove -y --purge

# Scripts.
ADD ./conf/scripts/start.sh /start.sh
RUN chmod 755 /start.sh

# Apache / PHP.
ADD ./conf/apache2/vhost.conf /etc/apache2/sites-available/default
ADD ./conf/php5/apache2.ini /etc/php5/apache2/php.ini
ADD ./conf/php5/cli.ini /etc/php5/cli/php.ini
ADD ./conf/php5/apc.ini /etc/php5/conf.d/apc.ini
ADD ./conf/php5/xhprof.ini /etc/php5/conf.d/xhprof.ini

RUN echo xdebug.max_nesting_level=512 >> /etc/php5/mods-available/xdebug.ini && \
    echo xdebug.profiler_output_dir=/var/www/logs >> /etc/php5/mods-available/xdebug.ini

# SSH setup.
RUN mkdir /var/run/sshd
RUN echo 'www-data:www-data' | chpasswd

# SSH login fix. Otherwise user is kicked off after login
RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd

# Custom entrypoint.
COPY ./docker-entrypoint.sh /

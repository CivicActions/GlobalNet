FROM mariadb:10.3

ENV MYSQL_ROOT_PASSWORD=root
ENV MYSQL_USER=dbuser
ENV MYSQL_PASSWORD=dbpass
ENV MYSQL_DATABASE=drupal
ENV MYSQL_HOME=/etc

COPY my.cnf /etc/my.cnf
COPY snapshot.sql.gz /docker-entrypoint-initdb.d/snapshot.sql.gz


FROM solr:5.5-alpine

COPY docroot/sites/all/modules/contrib/search_api_solr/solr-conf/5.x /myconfig

CMD solr-create -c collection1 -d /myconfig

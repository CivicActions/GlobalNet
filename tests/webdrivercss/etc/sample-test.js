var config = require('./etc/config');

// Run the test.
config.client
    .init()
    .path('/')
    .webdrivercss('home', [{
        name: 'header',
        elem: '.header'
    }, {
        name: 'footer',
        elem: '#footer-wrapper'
    }])
    .end();

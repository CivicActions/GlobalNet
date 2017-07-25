var WebdriverIO = require('webdriverio'),
    WebdriverCSS = require('webdrivercss');

// Initialise WebdriverIO.
var client = WebdriverIO.remote({
    logLevel: "verbose",
    desiredCapabilities: {browserName: process.env.BROWSER},
    host: process.env.WEBDRIVER_HOST,
    port: process.env.WEBDRIVER_PORT,
    path: process.env.WEBDRIVER_PATH
});
var baseUrl = process.env.BASE_URL;

WebdriverCSS.init(client, {
    screenshotRoot: './visual',
    misMatchTolerance: 0.05,
    screenWidth: [1024]
});

client
    .init()
    .url(baseUrl)
    .webdrivercss('Home', [{
        name: 'header',
        elem: '.header'
    }, {
        name: 'footer',
        elem: '#footer-wrapper'
    }])
    .end();

client
    .init()
    .url(baseUrl + '/node/add/support?gid=11')
    .webdrivercss('Support', [{
        name: 'form',
        elem: '.support-node-form'
    }])
    .end();


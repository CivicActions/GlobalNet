var WebdriverIO = require('webdriverio'),
    WebdriverCSS = require('webdrivercss');

// Initialise WebdriverIO.
var client = WebdriverIO.remote({
    desiredCapabilities: {browserName: process.env.BROWSER},
    host: process.env.WEBDRIVER_HOST,
    port: process.env.WEBDRIVER_PORT,
    path: process.env.WEBDRIVER_PATH
});
var baseUrl = process.env.BASE_URL;

// Initialise WebdriverCSS for `client` instance.
WebdriverCSS.init(client, {
    screenshotRoot: './visual',
    misMatchTolerance: 0.05,
    screenWidth: [1024]
});

client.addCommand("path", function(path) {
    return this.url(baseUrl + path);
});

module.exports.client = client;
module.exports.baseUrl = baseUrl;

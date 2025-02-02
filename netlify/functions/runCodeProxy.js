const fetch = require('node-fetch'); // Make sure to install node-fetch if it's not included

exports.handler = async function(event, context) {
    const githubRawUrl = event.queryStringParameters.githubUrl;

    try {
        const response = await fetch(githubRawUrl);
        if (!response.ok) {
            return {
                statusCode: response.status,
                body: JSON.stringify({ error: 'Failed to fetch C++ code' }),
            };
        }

        const cppCode = await response.text();
        
        // Optionally, use a C++ execution API to run the code, here we just send it back
        return {
            statusCode: 200,
            body: JSON.stringify({ code: cppCode }), // You can modify the body as per your needs
        };

    } catch (error) {
        return {
            statusCode: 500,
            body: JSON.stringify({ error: error.message }),
        };
    }
};

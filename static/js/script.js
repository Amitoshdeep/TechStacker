document.getElementById('project-form').addEventListener('submit', function(event) {
    event.preventDefault();

    const name = document.getElementById('name').value;
    const rollno = document.getElementById('rollno').value;
    const semester = document.getElementById('sem').value;
    const project = document.getElementById('project').value;

    fetch('https://your-railway-app-url.com/get_project', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
        },
        body: JSON.stringify({ name, rollno, semester, project }),
    })
    .then(response => response.json())
    .then(data => {
        if (data.success) {
            document.getElementById('cmd-output').innerHTML = `
                <strong>${data.data.name}</strong><br>
                ${data.data.description}<br>
                <strong>Instructions:</strong> ${data.data.instructions}
            `;
        } else {
            document.getElementById('cmd-output').textContent = 'Project not found!';
        }
    })
    .catch(error => {
        document.getElementById('cmd-output').textContent = 'Error: ' + error.message;
    });
});

from flask import Flask, request, jsonify
from flask_cors import CORS

app = Flask(__name__)
CORS(app)  # Allows frontend to call backend

# Sample project data
projects = {
    "1": {
        "project1": {
            "name": "Project 1",
            "description": "A simple C++ program that calculates student grades.",
            "instructions": "Follow the provided instructions.",
            "code": "https://github.com/Amitoshdeep/TechStacker/blob/main/cpp_files/Project1.cpp"
        },
        "project2": {
            "name": "Project 2",
            "description": "A C++ program that simulates a calculator.",
            "instructions": "Use it for arithmetic operations.",
            "code": "project2.cpp"
        }
    },
    "2": {
        "project1": {
            "name": "Project 1",
            "description": "A C++ program simulating a banking system.",
            "instructions": "Simulate deposits, withdrawals, and balance checks.",
            "code": "project1.cpp"
        },
        "project2": {
            "name": "Project 2",
            "description": "A Fibonacci calculator in C++.",
            "instructions": "Input a number to get its Fibonacci sequence.",
            "code": "project2.cpp"
        }
    }
}

@app.route("/")
def home():
    return "Flask Server is Running!"

@app.route("/get_project", methods=["POST"])
def get_project():
    data = request.json
    semester = data.get("semester")
    project = data.get("project")

    if semester in projects and project in projects[semester]:
        return jsonify({"success": True, "data": projects[semester][project]})
    return jsonify({"success": False, "message": "Invalid project or semester"})

if __name__ == "__main__":
    app.run(port=5000, debug=True)

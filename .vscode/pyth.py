from flask import Flask, jsonify, request

app = Flask(__name__)

# Define a list of programming languages
programming_languages = ['Python', 'Java','C' , 'JavaScript', 'C++', 'Ruby', 'Swift']

# GET request to display list of programming languages
@app.route('/', methods=['GET'])
def get_languages():
    return jsonify(programming_languages)

# PUT request to replace a programming language
@app.route('/<string:language>', methods=['PUT'])
def update_language(language):
    if language in programming_languages:
        index = programming_languages.index(language)
        programming_languages[index] = request.json['new_language']
        return jsonify({'message': 'Programming language updated', 'new_list': programming_languages})
    else:
        return jsonify({'message': 'Programming language not found'})

# POST request to add a programming language
@app.route('/', methods=['POST'])
def add_language():
    new_language = request.json['language']
    programming_languages.append(new_language)
    return jsonify({'message': 'Programming language added', 'new_list': programming_languages})

# DELETE request to remove a programming language
@app.route('/<string:language>', methods=['DELETE'])
def remove_language(language):
    if language in programming_languages:
        programming_languages.remove(language)
        return jsonify({'message': 'Programming language removed', 'new_list': programming_languages})
    else:
        return jsonify({'message': 'Programming language not found'})

if __name__ == '__main__':
    app.run(debug=True)

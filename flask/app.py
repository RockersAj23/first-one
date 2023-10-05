from flask import Flask
from flask import request
app = Flask(__name__)

@app.route("/")
def hello_world():
    return "<h1>doctor strange</h1>"

@app.route("/test1")
def test1():
    a=11
    return "this is the value of a: {}".format(a)

@app.route("/test2")
def test2():
    data = request.args.get('x')
    return "this is the data input form my url {}".format(data)

if __name__=="__main__":
    app.run(host="0.0.0.0")
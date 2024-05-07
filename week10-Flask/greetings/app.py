from flask import Flask, render_template, request


app = Flask(__name__)


# @app.route("/")
# def index():
    # if 'name' in request.args:
    #     name = request.args['name']
    # else:
    #     name = 'someone'
    # OR ================================
    # name = request.args.get("name", "someone else")
    # return render_template("index.html", name=name)
# ===============================================================
# @app.route("/")
# def index():
#     return render_template("index.html")

# @app.route("/greet", methods=["POST"])
# def greet():
#     return render_template("greet.html", name=request.args.get("name", "someone newer"))
# ================================================================
@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "GET":
        return render_template("index.html")
    elif request.method == "POST":
        return render_template("greet.html", name=request.form.get("name", "someone even newer"))

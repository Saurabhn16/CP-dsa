const express = require("express");
const bodyParser = require("body-parser");
const app = express();

app.set("view engine", "ejs");
app.use(bodyParser.urlencoded({
    extended: true
}));
app.get("/", function (req, res) {
    var today = new Date();
    var currentDay = today.getDay();
    var day = "";

    var options = {
        weekday: "long",
        day: "numeric",
        month: "long"
    };
    var day = today.toLocaleString("en-us", options);
    // var.render("list",{kindofDay})

    // default:
    // console.log("error :current day hai ky");  currentDay
    //
    // }
    res.render("list", {
        kindofDay: day,
    });
    res.send();
});
app.post("/", function (req, res) {
    var item = req.body.newItem;
    console.log(item);
});

app.listen(3000, function () {
    console.log("server!");
});
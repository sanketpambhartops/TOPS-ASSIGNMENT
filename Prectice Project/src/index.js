import express from "express";
import userRouter from "./routers/user.js";
import { dbConnection } from "./db/index.js";
import User from "./models/user.js";

const app = express();

// app.get("/create/urvish", (req, res) => {
//   res.send("you first api called ---- sanket");
//   User.create({
//     name: "sanket",
//     email: "sanket@gmail.com",
//     number: "9546412",
//   })
//     .then((res) => {
//       console.log("----res----", res);
//     })
//     .catch((err) => {
//       console.log("----err----", err);
//     });
// });

app.use("/user", userRouter);
app.listen(2000, () => {
  dbConnection();
  console.log(`your server is running on http://localhost:2000/`);
});
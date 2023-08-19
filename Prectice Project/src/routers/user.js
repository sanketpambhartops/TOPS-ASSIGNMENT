import express from "express";
import User from "../models/user";
const userRouter = express.Router();

userRouter.post("/create", (req, res) => {
    console.log("?.body:", req?.body);
    User.create(req?.body)
        .then((resData) => {
            res.send(resData);
        })
        .catch((err) => {
            res.send(err);
        });
});

userRouter.get("/allUser", (req, res) => {
    User.find()
      .then((userRes) => {
        res.status(200).send(userRes);
      })
      .catch((err) => {
        res.status(400).send(err);
      });
  });

export default userRouter;
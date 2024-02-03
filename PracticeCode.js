import { Configuration, OpenAIApi } from "openai"; 
import express from "express";

import bodyParser from "body-parser"; 
import cors from "cors";

const configuration = new Configuration ( {
    organization:"org-Zi9gMIdFBTw6PmsIxZM1kSj8",
     apiKey:"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",
    });

const openai = new OpenAIApi(configuration);

const completion = await openai.createChatCompletion({

model: "gpt-3.5-turbo", 
messages: [ 
    {role: "user", content: "Hello World"},
 ]

})

console.log(completion.data.choices[0].message); // correct this choice

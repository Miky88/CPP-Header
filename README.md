# CPP-Header
Create nice-looking headers in C++ using this function that automatically takes care of the length of the text and centeres it for you. Pretty cool, uh?

![Screenshot](https://media.discordapp.net/attachments/566330652413132800/781094763427397652/unknown.png)

## How to use
```cpp
string head[] = {
  "Hello World!",
  "This is a sample text!",
  "Put whatever here.",
  "I'm a teapot!"
};

/*
  You need to pass the array with header strings and the number of lines the array has
*/

header(head, sizeof(head)/sizeof(head[0]));
```

// file: FizzBuzz.js
//
// author: Josh Grant 2016
//
// FizzBuzz in JavaScript (NodeJS)

var strOut, i;

for (i = process.argv[2]; i <= process.argv[3]; i++) {
    strOut = "";
    if (i % 3 === 0) {
        strOut += "Fizz";
    }
    if (i % 5 === 0) {
        strOut += "Buzz";
    }
    if (strOut === "") {
        strOut = i;
    }
    console.log(strOut);
}
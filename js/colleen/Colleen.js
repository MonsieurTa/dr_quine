const C = String.fromCharCode;
const s = [ // data to print
  `const C = String.fromCharCode;`,
  `const s = [ // data to print`,
  `];`,
  `const print = () => {`,
  `  for (let i=0;i<2;i++)`,
  `    console.log(s[i]);`,
  `  for (let i=0;i<s.length;i++)`,
  `    console.log("  " + C(0x60) + s[i] + C(0x60) + ",");`,
  `  for (let i=2;i<s.length;i++)`,
  `    console.log(s[i]);`,
  `};`,
  `const main = () => { // printer`,
  `  print();`,
  `};`,
  `main();`,
];
const print = () => {
  for (let i=0;i<2;i++)
    console.log(s[i]);
  for (let i=0;i<s.length;i++)
    console.log("  " + C(0x60) + s[i] + C(0x60) + ",");
  for (let i=2;i<s.length;i++)
    console.log(s[i]);
};
const main = () => { // printer
  print();
};
main();

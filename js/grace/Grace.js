const fs = require('fs');
const C = String.fromCharCode;
const s = [
  `const fs = require('fs');`,
  `const C = String.fromCharCode;`,
  `const s = [`,
  `];`,
  `const main = () => {`,
  `  fs.writeFileSync('./Grace_kid.js', s.slice(0, 3).join(C(0xa)),{ mode: 0o666, flag: 'w' });`,
  `  fs.appendFileSync('./Grace_kid.js', C(0xa)+s.map(v => '  '+C(0x60)+v+C(0x60)+',').join(C(0xa)));`,
  `  fs.appendFileSync('./Grace_kid.js', C(0xa)+s.slice(3).join(C(0xa))+C(0xa))`,
  `};`,
  `main();`,
];
const main = () => {
  fs.writeFileSync('./Grace_kid.js', s.slice(0, 3).join(C(0xa)),{ mode: 0o666, flag: 'w' });
  fs.appendFileSync('./Grace_kid.js', C(0xa)+s.map(v => '  '+C(0x60)+v+C(0x60)+',').join(C(0xa)));
  fs.appendFileSync('./Grace_kid.js', C(0xa)+s.slice(3).join(C(0xa))+C(0xa))
};
main();

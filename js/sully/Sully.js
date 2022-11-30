const i = 5;
const { exec } = require('child_process');
const fs = require('fs');
const C = String.fromCharCode;
const a = [
  `const i = `,
  `const { exec } = require('child_process');`,
  `const fs = require('fs');`,
  `const C = String.fromCharCode;`,
  `const a = [`,
  `];`,
  `const main = () => {`,
  `  if (i<0) return;`,
  `  const childname = 'Sully_'+i+'.js';`,
  `  let s = a.slice(0, 5);`,
  `  s[0] = s[0]+(i-1)+';';`,
  `  s = [...s, ...a.map(v => '  '+C(0x60)+v+C(0x60)+','), ...a.slice(5), ''].join(C(0xa));`,
  `  fs.writeFileSync(childname, s, { mode: 0o666, flag: 'w'});`,
  `  exec('node '+ childname);`,
  `};`,
  `main();`,
];
const main = () => {
  if (i<0) return;
  const childname = 'Sully_'+i+'.js';
  let s = a.slice(0, 5);
  s[0] = s[0]+(i-1)+';';
  s = [...s, ...a.map(v => '  '+C(0x60)+v+C(0x60)+','), ...a.slice(5), ''].join(C(0xa));
  fs.writeFileSync(childname, s, { mode: 0o666, flag: 'w'});
  exec('node '+ childname);
};
main();

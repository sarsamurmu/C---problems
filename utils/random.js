const length = +process.argv[2];

const arr = Array(length).fill(0).map((_, i) => i + 1);
const shuf = arr
  .map((val) => ({ val, sort: Math.random() }))
  .sort((a, b) => a.sort - b.sort)
  .map(({ val }) => val);

console.log(`int numbers [${length}] = {${shuf.join(',')}};`)

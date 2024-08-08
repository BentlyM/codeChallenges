import http, { createServer } from 'http';

const PORT = 3000;

const server = http.createServer((request, response) => {
  // response.setHeader('Content-Type','text/html')
  // response.statusCode = 404;

  response.writeHead(500, {'Content-type': 'application/json'});
  response.end(JSON.stringify({message: 'server error'}));
});

server.listen(PORT, () => {
  console.log(`server running on port ${PORT}`);
});

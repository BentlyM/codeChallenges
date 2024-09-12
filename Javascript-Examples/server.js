import http, { createServer } from 'http';
import fs from 'fs/promises';
import url from 'url';
import path from 'path';
const PORT = process.env.PORT;

const __filename = url.fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

 
const server = createServer((request, response) => {

  try{
    if(request.method == 'GET'){
      let filePath;
      if(request.url == '/'){
        filePath = path.join(__dirname , 'Javascript-Example', 'index.html');
      }else if (request.url === '/about'){
        response.writeHead(200 , {'Content-type': 'text/html'});
        response.end('<h1>About</h1>');
      }else{
        response.writeHead(404 , {'Content-type': 'text/html'});
        response.end('<h1>Not Found</h1>');
      }
    }else{
      throw new Error('Method is not allowed')
    }
  }catch(e){
    response.writeHead(500 , {'Content-type': 'text/pain'});
    response.end(`${e} <-- this is the error`);
  }
});

server.listen(PORT, () => {
  console.log(`Server running on port ${PORT}`);
});
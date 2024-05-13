// Returns a random DNA base
const returnRandBase = () => {
    const dnaBases = ['A', 'T', 'C', 'G']
    return dnaBases[Math.floor(Math.random() * 4)] 
  }
  
  // Returns a random single strand of DNA containing 15 bases
  const mockUpStrand = () => {
    const newStrand = []
    for (let i = 0; i < 15; i++) {
      newStrand.push(returnRandBase())
    }
    return newStrand
  }
  
  const pAequorFactory = (specimenNum , dna) => {
    return {
      specimenNum,
      dna,
      mutate(){
        if(typeof this.dna === 'string'){
          choice = this.dna;
        }

        const newDna = returnRandBase();
        switch(choice){
          case 'A':
            //console.log(`this dna is ${this.dna}`);
            if(newDna != choice){
              this.dna = newDna;
            //console.log(`the newDna is ${this.dna}`)
              return this.dna;
            }
          case 'T':
            //console.log(`this dna is ${this.dna}`);
            if(newDna != choice){
              this.dna = newDna;
            //console.log(`the newDna is ${this.dna}`)
              return this.dna;
            }          
          case 'C':
            //console.log(`this dna is ${this.dna}`);
            if(newDna != choice){
              this.dna = newDna;
            // console.log(`the newDna is ${this.dna}`)
              return this.dna;
            }          
          case 'G':
            // console.log(`this dna is ${this.dna}`);
            if(newDna != choice){
              this.dna = newDna;
            // console.log(`the newDna is ${this.dna}`)
              return this.dna;
            }          
          default:
            return `Unknown DNA: ${this.dna}`;
        }
      },
      compareDna(compare){
        pAequor = {

        }
      },
    }
  }
  
console.log(pAequorFactory(Math.floor(Math.random()*10), returnRandBase()));
console.log(pAequorFactory(Math.floor(Math.random()*10), returnRandBase()).mutate());
/* 
Plan: a random inspirational message generator
    -> topic: inspiration , motiviation, brighter mood.
    -> nested structure array
        -> made from three different pieces of data
        ->  all being related to motivation/inspiration
    -> the sentence structure grammatically
        -> 1. Subject + Verb + Object/Complement
        -> ex1 - "The universe inspires endless possibilities."
        - or
        -> 2. subject, adverbialphrase ,verb object/complement ,conditional phrase 
        ->  ex2 - "In times of darkness, hope shines brightest, illuminating even the darkest corners."
*/

inspiration = [
    {
        wordTopic :  ["Love","Hope","Courage","Faith", "Dreams","Wisdom","Strength","Happiness","Freedom","Growth"],

        subject(){
            return this.wordTopic[Math.floor(Math.random() * this.wordTopic.length)];
        },

    },
    {
        verbs : ["Inspires","Encourages","Empowers","Ignites","Transforms","Motivates","Strengthens","Guides","Enlightens","Uplifts"],
        verb(){
            return verbs[Math.floor(Math.random() * this.verbs.length)];
        }
    },
    {
        wordFocus : ["Heart","Minds","Souls","Lives","Dreams","Spirits","Journeys","Paths","Destinies","Possibilities"],
        focus(){
            return wordFocus[Math.floor(Math.random() * this.wordFocus.length)];
        }
    }
]


console.log(inspiration[0].subject());
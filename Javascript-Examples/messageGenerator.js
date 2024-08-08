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

const inspiration = [
    {
        wordTopic :  ["Love","Hope","Courage","Faith", "Dreams","Wisdom","Strength","Happiness","Freedom","Growth"],

        subject(){
            return this.wordTopic[Math.floor(Math.random() * this.wordTopic.length)];
        },

    },
    {
        verbs : ["Inspires","Encourages","Empowers","Ignites","Transforms","Motivates","Strengthens","Guides","Enlightens","Uplifts"],

        verb(){
            return this.verbs[Math.floor(Math.random() * this.verbs.length)];
        },
    },
    {
        wordFocus : ["Heart","Minds","Souls","Lives","Dreams","Spirits","Journeys","Paths","Destinies","Possibilities"],

        focus(){
            return this.wordFocus[Math.floor(Math.random() * this.wordFocus.length)];
        }
    },
    {
        conditional : ["..., guiding us toward a brighter tomorrow.","..., reminding us of our inner strength.","..., showing us that anything is possible.","..., illuminating the path to success.","..., inspiring us to reach for the stars.","..., encouraging us to never give up.","..., leading us to new beginnings.","..., reminding us that every cloud has a silver lining.","..., teaching us to embrace change.","..., proving that miracles happen every day."],
        condition(){
            return this.conditional[Math.floor(Math.random() * this.conditional.length)];
        },
    }
]

const main = () => {
    const sentence = ["In the face of adversity ","With each sunrise ","Through the storms of life ","Amidst the chaos ","In moments of doubt "];

    template = sentence[Math.floor(Math.random() * sentence.length)] + `${inspiration[0].subject()} ${inspiration[1].verb()} ${inspiration[2].focus()}${inspiration[3].condition()}`;

    return template;
}

console.log(main())
function randAlert() { 
var randtext = new Array (); 
randtext[0] = "The name cappuccino comes from the resemblance of the drink to the clothing of the Capuchin monks."; 
randtext[1] = "Espresso literally means In Italian, the word espresso literally means "when something is forced out.";
randtext[2] = "Coffee was the first food to be Coffee was the first food to be freeze-dried."; 
randtext[3] = "40% of the world’s coffee is produced by Columbia and Brazil."; 
randtext[4] = "Gennaro Lombardi opened the first US pizzeria in NYC in 1895.";
randtext[5] = "Manhattan’s Chinatown is the largest Chinese enclave in the Western Hemisphere.";
randtext[6] = "New York City was was briefly the US capital from 1789 to 1790 and was the site of the inauguration of George Washington as President on April 30, 1789.";
randtext[7] = "The state fruit is the apple.";
randtext[8] = "New Yorkers travel an average of 40 minutes to work each day.";
randtext[9] = "More than 47 percent of New York City’s residents over the age of 5 speak a language other than English at home.";
randtext[10] = "The Federal Reserve Bank on New York’s Wall Street contains vaults that are located 80 feet beneath the bank and hold about 25 percent of the world’s gold bullion.";
var i = Math.floor(10*Math.random()) 

return randtext[i]; 
} 



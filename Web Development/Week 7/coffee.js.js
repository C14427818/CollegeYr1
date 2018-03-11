function randAlert() { 
var randtext = new Array (); 
randtext[0] = "New York City has 4,000 street food vendors."; 
randtext[1] = "The average temperature of New York City’s pavement on a hot summer day is 150 degrees."; 
randtext[2] = "More than 250 feature films are shot on location in New York City each year."; 
randtext[3] = "100 million Chinese food cartons are used annually in New York City."; 
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



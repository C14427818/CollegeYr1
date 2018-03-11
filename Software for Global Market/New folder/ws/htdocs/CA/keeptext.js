  function createCookie(cname, cvalue, exdays) {
            var d = new Date();
            d.setTime(d.getTime() + (exdays*24*60*60*1000));
            var expires = "expires=" + d.toUTCString();
            document.cookie = cname + "=" + cvalue + "; " + expires;
        }

        function getCookie(cookieToFind) {
            var myCookies = document.cookie.length;
            var individualCookies = document.cookie.split(';');
            for (var i = 0; i < individualCookies.length; i++) {
                var oneCookie = individualCookies[i].split("=");
                var name =  oneCookie[0];
                name = name.replace(/^\s+|\s+$/g, '') ;
                var value = oneCookie[1];
                if(name == cookieToFind) {
                    return value;
                }
            }
            return "";
        }

        function storeName() {
            var thename = document.getElementById("name").value;
            createCookie("name", thename, 1);
        }

        function generateName() {
            var thename = getCookie("name");
            document.getElementById("name").value = thename;
        }
	 function storeAge() {
            var theage = document.getElementById("Age").value;
            createCookie("Age", theage, 1);
        }

        function generateAge() {
            var theage = getCookie("Age");
            document.getElementById("Age").value = theage;
        }

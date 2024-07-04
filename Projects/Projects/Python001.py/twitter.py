import re
url  = input("URL: ").strip()

#username = url.replace("https://twitter.com/", "")
if matches := re.search(r"^https?://(?:www\.)?twitter\.com/([a-z0-9_A-Z]+)$",url, re.IGNORECASE):
    print(f"Username:",  matches.group(1))
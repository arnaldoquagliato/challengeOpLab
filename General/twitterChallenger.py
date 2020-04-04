import tweepy
import privateKeys

auth = tweepy.OAuthHandler(privateKeys.twitter_api_key, privateKeys.twitter_secret_key)
auth.set_access_token(privateKeys.twitter_token, privateKeys.twitter_token_secret)

api = tweepy.API(auth)

name = "palavra"
cont = 0
for result in api.search(q="{name}", count = 10):
    print("Twitter number: {} " .format(cont))
    print (result.text + "\n")
    cont +=1
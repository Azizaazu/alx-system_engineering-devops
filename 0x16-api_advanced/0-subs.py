#!/usr/bin/python3
""" Contains the number_of_subscribers function """
import requests

def number_of_subscribers(subreddit):
    """function that queries the Reddit API"""

    url = 'https://www.reddit.com/r/{}/about.json'.format(subreddit)
    headers = {'User-Agent': 'request'}
    response = requests.get(url, headers=headers, allow_redirects=False)
    if response.status_code != 200:
        return (0)

    data = response.json().get('data')
    num_subs = data.get('subscribers')
    return (num_subs)

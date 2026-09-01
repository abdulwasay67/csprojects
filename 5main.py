    import requests


def get_weather(city_name, api_key):
    base_url = "https://api.openweathermap.org/data/2.5/weather"
    query_params = {
        "q": city_name,
        "appid": api_key,
        "units": "metric"
    }
    try:
        response = requests.get(base_url, params=query_params)
        response.raise_for_status()
        weather_data = response.json()

        temperature = weather_data["main"]["temp"]
        humidity = weather_data["main"]["humidity"]
        condition = weather_data["weather"][0]["description"]
        country = weather_data["sys"]["country"]

        print(f"\nWeather in {city_name.title()}, {country}:")
        print(f" Temperature: {temperature}C")
        print(f" Humidity: {humidity}%")
        print(f" Condition: {condition.capitalize()}")

    except requests.exceptions.HTTPError:
        if response.status_code == 404:
            print(f" !!ERROR!! the city {city_name} was not found! Check your spelling")
        elif response.status_code == 401:
            print(" Invalid API key. Double check your OpenWeatherMap key")
        else:
            print(f" HTTP error occurred: {response.status_code}")
    except requests.exceptions.ConnectionError:
        print("Network error: Unable to connect to the internet")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")


if __name__ == "__main__":
    MY_API_KEY = "your_actual_api_key_here"

    print("--- Live Python Weather App ---")
    user_city = input("Enter a city name: ").strip()

    if user_city:
        get_weather(user_city, MY_API_KEY)
    else:
        print("❌ You must type a city name.")
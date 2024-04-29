#  Write a Python script that asks the user to enter their favorite movies one by one and stores them
#  in a list until they type 'stop', then prints the list.

# Create an empty list to store the movies
favorite_movies = []

# Prompt the user to input movies
while True:
    movie = input("Enter your favorite movie (type 'stop' to finish): ")
    if movie.lower() == 'stop':
        break
    favorite_movies.append(movie)

# Print the list of favorite movies
print("\nYour favorite movies:")
for movie in favorite_movies:
    print(f"- {movie}")

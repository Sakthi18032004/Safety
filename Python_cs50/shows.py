import sqlite3

db = sqlite3.connect("favorites.db")

# favorite = input("Favorite: ")

rows = db.execute("SELECT * FROM favorites WHERE problem = 'Mario'")

for row in rows:
    print(row["Timestamp"])
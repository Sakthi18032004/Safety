import sqlite3

db = sqlite3.connect("favorites.db")
db.row_factory = sqlite3.Row

favorite = input("Favorite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", (favorite,))

for row in rows:
    print(row['n'])
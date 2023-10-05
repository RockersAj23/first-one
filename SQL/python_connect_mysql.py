import mysql.connector

conn=mysql.connector.connect(host='localhost',username='root',password='Inthebox@123',database='first_schema')
my_cursor=conn.cursor()


conn.commit()
conn.close()

print("connection successful")
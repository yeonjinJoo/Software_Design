S1 = input().split()
S2 = input().split()
S3 = input().split()
students = {S1[0] : S1[1], S2[0] : S2[1], S3[0] : S3[1]}

print("Which student's score?")
student = input()

if student in students.keys() :
    print(student + "'s score: " + students[student])
else :
    print(student + " is not in the database.")

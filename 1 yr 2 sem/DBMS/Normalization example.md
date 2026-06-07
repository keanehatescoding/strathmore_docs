---
id: Normalization
aliases: []
tags: []
---


| Student_ID | Stud_Fname | Student_Lname | Course_Code | Course_Name            |
| ---------- | ---------- | ------------- | ----------- | ---------------------- |
| 47361      | Peter      | Karani        | DBT1101     | Programming I          |
| 47361      | Peter      | Karani        | DBT1102     | Fundametals of IT      |
| 47361      | Peter      | Karani        | DBT1103     | Business Communication |
| 47378      | Diana      | Tirop         | DBT1101     | Programming I          |
| 47396      | Joanne     | Khakame       | DBT1101     | Programming I          |

## 1 Normal form

| Course_Code | Course_Name            | Student_ID |
| ----------- | ---------------------- | ---------- |
| DBT1101     | Programming \|         | 47361      |
| DBT1102     | Fundamentals of IT     | 47361      |
| DBT1103     | Business Communication | 47361      |
| DBT1101     | Programming I          | 47278      |
| DBT1101     | Programming I          | 47396      |

| Student_FName | Student_Lname | Student_ID |
| ------------- | ------------- | ---------- |
| Peter         | karani        | 47361      |
| Peter         | karani        | 47361      |
| Peter         | karani        | 47361      |
| Diana         | Tirop         | 47278      |
| Joanne        | Khakame       | 47396      |

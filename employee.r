employees <- data.frame(
  Name = c("harsh", "abubhav", "ashish", "manish", "kaluwa"),
  Age = c(28, 34, 26, 45, 32),
  Department = c("IT", "HR", "Finance", "HR", "IT"),
  Salary = c(50000, 60000, 45000, 55000, 62000)
)

it_employees <- employees[employees$Department == "IT", ]
print(it_employees)
cat("\n")

hr_employees <- employees[employees$Department == "HR", ]
hr_employees$Salary <- hr_employees$Salary * 1.10
print(hr_employees)

cat("\n")
avg_salary<-mean(employees$Salary)
cat("average salary" ,avg_salary)

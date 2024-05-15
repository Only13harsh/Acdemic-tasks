# Load required libraries
library(tidyr)

# Read the dataset
students <- read.csv("students_data.csv")

# Check the structure of the dataset
str(students)

# Clean and tidy the dataset
students_tidy <- students %>%
  # Reshape the data into a tidy format
  pivot_longer(cols = c(Math_score, Science_score, English_score),
               names_to = "Test",
               values_to = "Score") %>%
  # Handle missing values if any
  na.omit() %>%
  # Perform any additional transformations necessary for analysis
  mutate(Test = factor(Test))

# Check the structure of the tidy dataset
str(students_tidy)

# View the first few rows of the tidy dataset
head(students_tidy)

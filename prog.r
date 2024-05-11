# Load necessary libraries
library(readxl)
library(ggplot2)

# Load the data
df <- read_excel("C:/Users/harsh/OneDrive/Desktop/dengue fever.xlsx")

# Convert Year to a factor
df$Year <- as.factor(df$Year)

# Create a vector of colors
colors <- rainbow(length(unique(df$Year)))

# Bar plot of dengue_total with a colorful legend
ggplot(df, aes(x=Year, y=dengue_total, fill=Year)) +
  geom_bar(stat="identity") +
  scale_fill_manual(values=colors) +
  labs(title="Bar Plot of Dengue Total", x="Year", y="Dengue Total") +
  theme(legend.position="bottom")

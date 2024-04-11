library(ggplot2)

ggplot(Housing, aes(x = area, y = predicted_prob, color = factor(high_priced))) +
  geom_point() +
  geom_smooth(method = "glm", method.args = list(family = "binomial"), se = FALSE) +
  labs(title = "Predicted Probabilities vs. Area",
       x = "Area",
       y = "Predicted Probability",
       color = "High Priced") +
  scale_color_manual(values = c("blue", "red")) +
  theme_minimal()

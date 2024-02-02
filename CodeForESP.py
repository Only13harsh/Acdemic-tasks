import matplotlib.pyplot as plt
import numpy as np

def ramp_function(x):
    return np.maximum(0, x)

# Generate x values from -5 to 5
x_values = np.linspace(-5, 5, 100)

# Calculate y values using the ramp function
y_values = ramp_function(x_values)

# Plot the ramp function
plt.plot(x_values, y_values, label='Ramp Function')
plt.xlabel('x')
plt.ylabel('Ramp(x)')
plt.title('Ramp Function Plot')
plt.axhline(0, color='black',linewidth=0.5)
plt.axvline(0, color='black',linewidth=0.5)
plt.grid(color = 'gray', linestyle = '--', linewidth = 0.5)
plt.legend()
plt.show()

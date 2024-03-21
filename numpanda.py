import numpy as np
import pandas as pd
from pandas import Series, DataFrame
arr = np.array([1, 2, 3, 4, 5, 6])
even_numbers = arr[arr % 2 == 0]
print("Even numbers in the array:", even_numbers)


mydataset={
    'cars':["Maruti","Volvo","Ford"],
    'passings':[3,2,7]
}
myvar=pd.DataFrame(mydataset)
print(myvar)


mydataset =[3, 2, 7]
myvar = pd.Series(mydataset)
print(myvar)

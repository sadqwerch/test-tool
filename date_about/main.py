from pandas import read_excel
from sklearn import preprocessing
from sklearn.decomposition import PCA
import numpy as np

dataset = read_excel('C:\\Users\\sadqwerch\\Desktop\\毕设\\数据.xlsx', sheet_name = 'Sheet5', index_col = 0)
values = dataset.values
print(values)
def Z_Score(data):
    lenth = len(data)
    total = sum(data)
    ave = float(total)/lenth
    tempsum = sum([pow(data[i] - ave,2) for i in range(lenth)])
    tempsum = pow(float(tempsum)/lenth,0.5)
    for i in range(lenth):
        data[i] = (data[i] - ave)/tempsum
    return data
date = Z_score(date)
data = preprocessing.scale(values)
print(data)
X = np.array(data)
pca = PCA(n_components = 7)
pca.fit(X)
print(pca.explained_variance_ratio_)
for i in pca.explained_variance_ratio_:
    print(round(i,5))

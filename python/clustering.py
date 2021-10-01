import numpy as np
import matplotlib.pyplot as plt
from matplotlib import style
from sklearn.cluster import KMeans

style.use('ggplot')

data = np.array([
    [1,3],
    [2,1.5],
    [3,3],
    [6,7],
    [8,9],
    [9.5,6.5],
])

# plt.scatter(data[:,0], data[:,1], s=50)
# plt.show()



colors = ['g.', 'r.', 'b.', 'c.', 'b.', 'k.']

classification = KMeans(n_clusters = 2)
classification.fit(data)

centriods = classification.cluster_centers_
labels = classification.labels_

for i in range(len(data)):
    plt.plot(data[i][0], data[i][1], colors[labels[i]], markersize = 25) 

plt.scatter(centriods[:, 0], centriods[:,1], marker='x', s = 150, linewidths=50)
plt.show()


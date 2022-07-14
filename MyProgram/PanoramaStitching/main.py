import cv2
import os

mainFolder = 'Images'
#Функция listdir() модуля os возвращает список, содержащий имена файлов и директорий в каталоге, заданном путем path.
myFolders = os.listdir(mainFolder)
#Выводим все содержимое папки
print(myFolders)

for folder in myFolders:
    path = mainFolder + '/' + folder
    images=[]
    myList = os.listdir(path)
    print(len(myList))
    for imgN in myList:
        curImg = cv2.imread(f'{path}/{imgN}')
        #curImg = cv2.resize(curImg,(0,0),None,0.5,0.5)
        images.append(curImg)

    stitcher = cv2.Stitcher.create()
    (status, result) = stitcher.stitch(images)
    if (status == cv2.STITCHER_OK):
        print('Panorama Generated')
        cv2.imshow(folder,result)
        cv2.waitKey(0)
    else:
        print(status)




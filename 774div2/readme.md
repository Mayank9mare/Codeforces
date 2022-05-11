 # **Mayank Raj (B19CSE053)**

## Q1) 

## Part A

Extracted features from a pretrained resnet50 and fed it into a SVM classifier.

|Parameter| Train | Test |
|---|---|---|
|Accuracy| 98.28% | 84.28%|

**Confusion Matrix**

![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/cm1.png?raw=true)

**ROC Curve**

![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/roc1.png?raw=true)

## Part B

Fine tuned Resnet50 by making layer3 and layer2 trainable and using Adam optimiser.

**Test Accuracy** 72.23%

**ROC Curve**

![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/roc2.png?raw=true)

**Class wise Accuracy**

![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/cwa.png?raw=true)

**Confusion Matrix**

![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/cm2.png?raw=true)


## Q2

* Finetuned Resnet18 and did classification on all 200 classes.
* Implemeted Dataloader for Triplet Loss and Center loss from scratch.
* Implemnet Center loss from scratch.


**NOTE:** No. of epochs taken are small as I have no access to GPU servers and google collab limits GPU access and so each epoch takes upto 20 minutes of time. Due to this my loss curves are discrete rather than continuous because of less epochs.


|Parameter|Cross-entropy Loss|Triplet Loss| Center Loss|
|---|---|---|---|
|Train Accuracy| 58.025% | 68.72%| 65.72%|
|Test Accuracy| 51.59% |51.2%| 48.97%|
|Loss plots|![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/loss3.png?raw=true) | ![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/loss4.png?raw=true)|![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/loss5.png?raw=true) |


## Q3

* Implemented a 3-layer CNN network for dogs vs cats classification task.
* Compared the accuracy on various optimisation Techniques

|Parameter| Vanilla SGD | Mini Batch SGD | Mini Batch with momentum| Mini Batch with Adam|
|---|---|---|---|---|
|Accuracy|83.21|81.42%|78.84%|73.2%|
|Loss plots|![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/o1.png?raw=true)|![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/o2.png?raw=true)|![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/o3.png?raw=true)|![image](https://github.com/Mayank9mare/ImagesForMarkdown/blob/main/o4.png?raw=true)|
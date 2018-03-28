#define ROW_SIZE 100
#define COL_SIZE 50
#define DATA_SIZE 5000
double input_data_A[DATA_SIZE] = 
{
10, 188, 212, 512, 337, 619, 409, 569, 803, 792, 743, 282, 819, 276, 596, 238, 89, 124, 448, 203, 219, 473, 103, 670, 811, 381, 50, 717, 655, 148, 383, 785, 828, 777, 615, 2, 769, 354, 526, 231, 738, 549, 952, 734, 556, 50, 132, 857, 831, 435, 878, 914, 289, 492, 850, 119, 68, 169, 388, 35, 446, 567, 651, 305, 278, 963, 268, 807, 891, 10, 157, 147, 793, 661, 96, 26, 850, 316, 89, 346, 817, 290, 217, 229, 355, 301, 127, 625, 695, 244, 683, 556, 243, 511, 514, 391, 737, 169, 523, 950, 624, 514, 768, 440, 352, 448, 656, 723, 301, 152, 616, 990, 155, 69, 680, 999, 421, 199, 53, 384, 32, 775, 328, 469, 288, 319, 596, 103, 831, 842, 559, 960, 753, 919, 466, 456, 586, 322, 980, 41, 241, 675, 304, 873, 682, 207, 300, 557, 874, 233, 820, 209, 484, 478, 219, 85, 209, 478, 861, 854, 496, 841, 490, 651, 28, 75, 997, 311, 650, 976, 145, 907, 900, 500, 336, 714, 469, 554, 655, 468, 990, 862, 200, 106, 855, 518, 983, 5, 904, 234, 789, 249, 893, 470, 936, 632, 454, 157, 438, 6, 180, 705, 889, 410, 665, 535, 934, 844, 125, 515, 657, 691, 936, 15, 454, 882, 178, 750, 743, 527, 581, 835, 525, 464, 0, 49, 51, 991, 10, 973, 90, 798, 597, 536, 569, 213, 133, 575, 208, 486, 884, 193, 725, 428, 189, 22, 268, 484, 258, 270, 358, 139, 148, 76, 343, 171, 235, 927, 14, 596, 658, 647, 235, 875, 906, 184, 254, 93, 722, 646, 454, 67, 498, 22, 461, 511, 600, 313, 995, 617, 542, 830, 79, 933, 66, 200, 132, 892, 187, 936, 762, 856, 466, 479, 4, 899, 818, 99, 718, 526, 271, 280, 186, 940, 406, 704, 830, 225, 42, 274, 889, 940, 516, 336, 466, 190, 622, 999, 813, 407, 40, 786, 340, 411, 882, 702, 757, 471, 174, 41, 976, 332, 687, 922, 510, 750, 677, 141, 382, 214, 81, 628, 18, 223, 328, 243, 605, 431, 551, 538, 555, 8, 639, 958, 85, 2, 686, 707, 156, 83, 612, 757, 295, 651, 686, 906, 848, 405, 904, 384, 278, 54, 9, 680, 536, 927, 505, 613, 644, 714, 239, 504, 592, 842, 336, 766, 639, 116, 281, 210, 732, 607, 279, 234, 393, 390, 1000, 251, 493, 144, 637, 530, 580, 405, 223, 144, 942, 945, 705, 944, 145, 235, 74, 415, 692, 481, 997, 619, 97, 966, 594, 751, 298, 523, 325, 403, 111, 474, 595, 415, 348, 531, 119, 905, 45, 117, 864, 332, 22, 370, 24, 754, 983, 752, 804, 345, 710, 53, 106, 505, 788, 155, 966, 0, 626, 996, 860, 676, 839, 689, 522, 197, 413, 449, 247, 629, 263, 642, 257, 396, 630, 455, 995, 387, 826, 928, 525, 300, 390, 349, 446, 247, 872, 471, 542, 624, 239, 663, 116, 676, 169, 60, 601, 932, 26, 270, 505, 998, 320, 325, 255, 199, 134, 767, 547, 80, 473, 422, 286, 473, 837, 911, 702, 9, 740, 179, 111, 330, 107, 812, 932, 752, 274, 559, 778, 401, 319, 883, 761, 575, 809, 151, 893, 427, 244, 641, 594, 680, 274, 536, 403, 884, 881, 518, 29, 915, 762, 41, 572, 531, 814, 948, 116, 611, 110, 74, 539, 364, 270, 816, 87, 322, 289, 535, 491, 730, 601, 705, 708, 245, 674, 298, 905, 55, 755, 314, 112, 423, 588, 803, 34, 16, 589, 391, 573, 682, 939, 484, 89, 130, 604, 741, 256, 285, 32, 158, 280, 1, 95, 832, 670, 949, 395, 976, 21, 796, 556, 631, 407, 321, 662, 188, 530, 999, 831, 909, 306, 433, 708, 683, 328, 398, 456, 942, 922, 558, 458, 450, 231, 491, 843, 992, 351, 15, 396, 949, 180, 165, 404, 572, 420, 165, 29, 37, 300, 160, 171, 532, 717, 99, 977, 26, 712, 877, 55, 947, 867, 685, 772, 966, 99, 510, 137, 637, 703, 72, 91, 551, 670, 601, 42, 732, 73, 906, 366, 71, 935, 433, 728, 158, 524, 862, 254, 764, 86, 730, 393, 305, 350, 131, 986, 666, 621, 501, 148, 24, 485, 49, 595, 136, 90, 437, 625, 884, 348, 27, 73, 723, 279, 478, 486, 823, 905, 193, 200, 650, 6, 625, 472, 896, 671, 399, 23, 56, 530, 383, 797, 989, 925, 735, 16, 647, 110, 356, 101, 882, 291, 218, 668, 36, 286, 177, 978, 901, 376, 451, 217, 109, 588, 173, 849, 722, 122, 285, 312, 743, 976, 663, 152, 875, 2, 4, 73, 181, 831, 568, 44, 189, 596, 872, 880, 317, 291, 36, 61, 940, 355, 646, 460, 293, 504, 283, 249, 714, 546, 681, 143, 726, 384, 429, 972, 219, 57, 552, 224, 770, 798, 497, 410, 222, 633, 863, 502, 952, 693, 368, 125, 806, 631, 278, 808, 392, 818, 991, 91, 367, 782, 257, 617, 527, 666, 919, 960, 160, 980, 534, 505, 909, 317, 652, 816, 266, 850, 469, 808, 642, 41, 347, 226, 869, 957, 120, 502, 595, 335, 219, 706, 458, 288, 7, 642, 697, 510, 800, 787, 382, 104, 650, 510, 287, 15, 149, 575, 107, 108, 849, 584, 237, 772, 147, 453, 797, 288, 406, 750, 982, 356, 888, 604, 184, 893, 383, 167, 157, 640, 511, 440, 969, 170, 370, 992, 649, 589, 803, 632, 601, 832, 644, 666, 469, 150, 825, 999, 312, 441, 842, 116, 334, 83, 872, 699, 629, 923, 142, 203, 151, 57, 761, 423, 629, 807, 646, 500, 177, 278, 836, 559, 331, 238, 883, 474, 731, 841, 992, 597, 587, 466, 263, 43, 716, 387, 423, 218, 237, 19, 747, 982, 816, 635, 687, 220, 862, 316, 626, 963, 208, 948, 501, 187, 794, 1000, 122, 596, 329, 754, 55, 959, 84, 818, 46, 793, 934, 892, 984, 108, 743, 13, 749, 660, 679, 98, 808, 462, 963, 295, 698, 527, 947, 754, 842, 376, 231, 473, 806, 859, 891, 987, 314, 68, 253, 78, 772, 397, 170, 329, 455, 175, 855, 864, 311, 432, 983, 673, 428, 94, 226, 572, 543, 559, 372, 836, 289, 178, 927, 262, 251, 424, 285, 583, 589, 434, 1, 879, 623, 614, 720, 211, 877, 903, 751, 612, 217, 483, 354, 295, 396, 768, 871, 247, 575, 735, 780, 762, 353, 685, 196, 67, 442, 235, 144, 621, 682, 193, 100, 13, 898, 605, 699, 858, 850, 411, 394, 691, 705, 758, 715, 198, 424, 949, 713, 250, 248, 800, 317, 832, 852, 894, 179, 226, 320, 572, 538, 716, 661, 310, 557, 6, 685, 80, 908, 126, 593, 337, 125, 913, 981, 565, 174, 533, 398, 13, 642, 673, 204, 79, 106, 394, 967, 117, 918, 554, 299, 677, 876, 243, 937, 712, 587, 834, 96, 653, 413, 98, 560, 851, 266, 383, 575, 105, 815, 470, 633, 224, 496, 159, 177, 202, 58, 277, 687, 481, 833, 333, 40, 31, 14, 487, 317, 587, 777, 503, 137, 878, 470, 0, 333, 630, 995, 199, 280, 143, 615, 301, 722, 206, 775, 914, 955, 499, 485, 131, 286, 632, 523, 700, 397, 897, 175, 902, 447, 822, 857, 762, 52, 434, 941, 415, 641, 676, 82, 115, 995, 364, 169, 890, 865, 520, 961, 1000, 835, 837, 819, 832, 976, 890, 53, 681, 331, 813, 162, 76, 405, 978, 443, 307, 887, 716, 709, 577, 219, 669, 584, 835, 874, 203, 463, 802, 599, 601, 480, 248, 727, 264, 665, 383, 76, 657, 111, 567, 653, 882, 954, 590, 296, 362, 450, 382, 188, 355, 673, 867, 637, 792, 181, 843, 103, 676, 875, 704, 199, 787, 250, 879, 463, 436, 175, 204, 964, 629, 544, 232, 182, 359, 949, 903, 412, 75, 747, 28, 684, 421, 534, 524, 458, 794, 550, 589, 328, 584, 877, 432, 686, 344, 494, 307, 701, 206, 129, 128, 186, 238, 493, 498, 872, 133, 28, 812, 206, 963, 306, 666, 324, 203, 274, 384, 588, 880, 608, 516, 863, 188, 384, 715, 566, 176, 823, 832, 967, 58, 972, 251, 83, 261, 421, 727, 871, 544, 138, 496, 632, 691, 522, 744, 405, 737, 235, 721, 635, 412, 646, 475, 405, 151, 346, 222, 596, 305, 100, 369, 548, 260, 490, 393, 269, 699, 992, 622, 952, 700, 43, 339, 238, 339, 308, 400, 966, 77, 373, 713, 48, 509, 631, 0, 705, 242, 499, 875, 728, 453, 713, 168, 3, 773, 339, 458, 47, 834, 907, 22, 116, 315, 68, 332, 652, 728, 325, 852, 589, 891, 812, 872, 265, 474, 220, 180, 838, 808, 615, 907, 377, 830, 110, 762, 8, 235, 97, 4, 625, 134, 688, 188, 569, 341, 836, 965, 255, 772, 934, 938, 89, 258, 487, 117, 369, 434, 982, 737, 930, 983, 728, 93, 125, 339, 470, 928, 999, 210, 760, 824, 350, 708, 998, 813, 487, 975, 552, 248, 601, 165, 173, 320, 449, 760, 768, 670, 892, 443, 196, 350, 526, 289, 962, 463, 963, 498, 573, 407, 838, 928, 875, 287, 243, 744, 417, 506, 646, 237, 366, 812, 948, 11, 930, 638, 980, 800, 918, 117, 478, 684, 268, 801, 124, 227, 932, 208, 859, 363, 581, 665, 904, 919, 8, 600, 3, 271, 764, 376, 935, 830, 365, 857, 314, 662, 34, 321, 523, 966, 740, 436, 706, 89, 579, 117, 705, 735, 827, 974, 462, 102, 432, 801, 511, 223, 999, 849, 720, 608, 472, 646, 277, 877, 77, 858, 280, 82, 344, 603, 76, 923, 533, 908, 405, 853, 347, 54, 784, 240, 703, 5, 483, 109, 842, 389, 144, 958, 255, 41, 703, 185, 87, 504, 690, 455, 713, 125, 505, 1, 35, 41, 438, 661, 422, 626, 764, 402, 697, 4, 180, 736, 864, 511, 825, 384, 805, 782, 279, 134, 395, 530, 365, 10, 528, 316, 540, 553, 705, 815, 590, 973, 845, 343, 851, 432, 199, 292, 478, 138, 252, 751, 870, 134, 152, 36, 712, 397, 290, 116, 343, 841, 731, 936, 596, 957, 187, 459, 899, 612, 557, 412, 177, 164, 209, 59, 442, 176, 683, 285, 966, 124, 333, 931, 478, 483, 663, 380, 843, 960, 607, 760, 374, 22, 823, 518, 94, 899, 981, 775, 420, 675, 403, 787, 522, 901, 359, 491, 954, 348, 65, 800, 873, 650, 846, 955, 904, 137, 404, 225, 511, 225, 282, 76, 861, 686, 240, 127, 65, 47, 753, 940, 800, 988, 148, 305, 508, 540, 612, 380, 64, 887, 499, 538, 245, 26, 264, 196, 71, 605, 645, 830, 456, 772, 554, 130, 322, 412, 221, 246, 811, 255, 726, 94, 34, 940, 923, 465, 33, 858, 817, 517, 422, 560, 949, 262, 339, 971, 463, 713, 848, 910, 509, 861, 128, 980, 278, 56, 297, 82, 647, 359, 556, 373, 845, 460, 112, 201, 304, 237, 797, 226, 430, 947, 230, 351, 881, 57, 782, 646, 123, 188, 147, 483, 21, 329, 997, 491, 225, 323, 500, 477, 651, 793, 612, 980, 926, 241, 953, 584, 955, 563, 473, 346, 328, 696, 394, 37, 447, 865, 409, 127, 907, 825, 724, 381, 280, 67, 660, 115, 579, 494, 761, 679, 663, 305, 489, 346, 536, 145, 42, 965, 334, 68, 116, 808, 210, 650, 391, 900, 543, 209, 184, 958, 990, 726, 759, 19, 750, 379, 722, 92, 852, 613, 480, 137, 406, 464, 682, 999, 242, 134, 775, 266, 79, 264, 724, 832, 951, 497, 224, 982, 519, 414, 24, 764, 322, 648, 66, 422, 845, 697, 900, 306, 663, 461, 563, 212, 779, 270, 828, 755, 653, 139, 164, 746, 517, 837, 944, 443, 690, 929, 109, 790, 34, 638, 886, 346, 39, 69, 12, 70, 563, 67, 646, 977, 274, 651, 464, 610, 482, 612, 12, 274, 525, 943, 414, 114, 882, 64, 494, 601, 732, 626, 80, 203, 704, 983, 913, 397, 914, 638, 362, 451, 315, 355, 346, 566, 546, 745, 591, 642, 328, 362, 244, 837, 233, 556, 627, 972, 718, 841, 343, 608, 143, 906, 703, 460, 653, 619, 882, 891, 895, 31, 822, 187, 721, 821, 920, 396, 791, 812, 228, 285, 238, 536, 194, 953, 347, 143, 715, 387, 297, 486, 248, 908, 76, 141, 600, 540, 718, 423, 349, 660, 410, 549, 310, 821, 566, 765, 476, 972, 713, 864, 111, 759, 484, 895, 144, 568, 253, 176, 702, 362, 794, 359, 85, 4, 980, 155, 647, 810, 249, 108, 407, 50, 645, 964, 186, 450, 937, 850, 77, 988, 516, 112, 450, 220, 393, 834, 215, 683, 450, 815, 544, 446, 826, 13, 452, 521, 915, 105, 237, 356, 354, 957, 196, 546, 577, 992, 728, 760, 500, 147, 720, 344, 350, 131, 543, 513, 768, 103, 237, 69, 658, 657, 106, 91, 52, 249, 71, 554, 25, 245, 123, 27, 96, 828, 874, 81, 441, 486, 607, 48, 547, 25, 254, 332, 580, 956, 222, 576, 700, 938, 970, 359, 661, 299, 332, 19, 433, 106, 695, 871, 551, 570, 911, 198, 697, 235, 102, 875, 697, 254, 458, 725, 442, 711, 704, 726, 648, 736, 164, 680, 326, 554, 448, 429, 515, 829, 826, 12, 8, 638, 351, 226, 241, 2, 251, 173, 37, 710, 558, 591, 182, 966, 603, 433, 875, 952, 183, 212, 211, 708, 867, 181, 947, 708, 616, 980, 69, 99, 161, 434, 948, 226, 248, 165, 755, 181, 968, 4, 568, 255, 576, 409, 614, 341, 237, 580, 861, 124, 525, 816, 463, 355, 800, 764, 599, 99, 20, 535, 229, 17, 413, 396, 398, 430, 174, 589, 298, 13, 483, 146, 554, 224, 702, 141, 586, 740, 968, 818, 243, 521, 835, 178, 272, 586, 604, 940, 208, 461, 132, 923, 557, 197, 925, 572, 685, 305, 966, 961, 173, 390, 237, 302, 645, 180, 404, 439, 56, 266, 929, 456, 513, 831, 1000, 148, 188, 157, 779, 906, 615, 572, 565, 226, 656, 961, 686, 399, 505, 898, 824, 570, 119, 405, 529, 551, 935, 417, 370, 358, 96, 123, 712, 293, 694, 418, 703, 677, 696, 793, 774, 567, 125, 834, 137, 490, 665, 388, 57, 418, 115, 99, 595, 730, 687, 325, 635, 126, 953, 169, 971, 30, 796, 702, 648, 334, 711, 711, 64, 544, 735, 486, 821, 609, 853, 311, 614, 830, 572, 74, 178, 867, 167, 888, 952, 710, 301, 484, 490, 142, 343, 254, 118, 502, 390, 771, 373, 198, 399, 641, 668, 110, 541, 310, 770, 314, 156, 691, 951, 345, 478, 554, 732, 605, 612, 340, 331, 644, 916, 341, 703, 881, 688, 349, 159, 83, 584, 600, 844, 216, 960, 833, 363, 912, 77, 288, 641, 425, 208, 749, 224, 900, 728, 71, 681, 652, 624, 849, 693, 342, 591, 648, 426, 620, 45, 40, 636, 914, 135, 98, 362, 981, 936, 734, 485, 921, 480, 779, 940, 937, 203, 900, 746, 725, 388, 917, 960, 107, 926, 121, 727, 399, 307, 425, 608, 272, 41, 616, 813, 782, 881, 165, 574, 153, 587, 805, 726, 944, 379, 478, 215, 828, 605, 904, 474, 787, 482, 226, 88, 148, 481, 34, 856, 271, 933, 223, 346, 118, 819, 530, 615, 627, 252, 827, 58, 81, 182, 282, 957, 207, 125, 766, 761, 931, 98, 856, 734, 467, 917, 540, 190, 604, 367, 248, 701, 570, 181, 319, 710, 16, 204, 285, 394, 180, 955, 521, 382, 229, 434, 896, 823, 322, 725, 696, 339, 162, 214, 531, 480, 8, 792, 762, 43, 28, 600, 619, 931, 288, 137, 450, 901, 165, 481, 402, 824, 674, 307, 65, 674, 375, 359, 791, 893, 78, 282, 284, 706, 274, 592, 726, 660, 494, 64, 169, 38, 956, 988, 810, 383, 329, 28, 386, 80, 254, 860, 197, 49, 671, 409, 219, 499, 406, 294, 141, 12, 718, 115, 751, 501, 757, 892, 719, 308, 292, 800, 982, 976, 185, 21, 17, 377, 440, 133, 890, 912, 747, 657, 520, 1, 618, 606, 781, 202, 838, 581, 268, 849, 320, 910, 732, 411, 736, 979, 718, 330, 605, 103, 911, 97, 181, 763, 912, 699, 156, 671, 402, 88, 440, 387, 216, 0, 690, 460, 160, 725, 252, 293, 817, 423, 17, 550, 21, 133, 926, 320, 547, 224, 205, 796, 92, 498, 137, 260, 678, 256, 784, 792, 36, 132, 147, 983, 148, 853, 908, 626, 992, 464, 928, 481, 446, 369, 595, 949, 27, 217, 499, 865, 254, 169, 67, 494, 712, 641, 180, 716, 637, 1000, 9, 512, 878, 965, 252, 431, 205, 748, 516, 91, 451, 38, 885, 830, 272, 494, 5, 746, 855, 649, 490, 926, 452, 686, 617, 70, 976, 122, 557, 10, 355, 368, 453, 937, 127, 960, 295, 207, 500, 612, 659, 936, 726, 272, 754, 145, 955, 89, 604, 681, 998, 629, 34, 750, 413, 794, 444, 715, 635, 503, 716, 928, 895, 750, 767, 511, 448, 808, 928, 715, 362, 376, 206, 497, 942, 27, 662, 386, 383, 652, 962, 709, 978, 184, 336, 152, 803, 885, 980, 566, 194, 567, 501, 273, 535, 130, 709, 53, 221, 672, 290, 453, 937, 429, 474, 567, 499, 413, 738, 726, 287, 994, 154, 870, 665, 556, 958, 186, 314, 470, 586, 864, 396, 529, 950, 321, 330, 226, 988, 280, 453, 211, 92, 204, 867, 677, 160, 954, 223, 576, 586, 194, 952, 33, 539, 514, 184, 433, 619, 626, 111, 814, 770, 3, 792, 581, 315, 777, 127, 592, 96, 961, 942, 339, 148, 740, 632, 976, 853, 566, 957, 82, 250, 3, 220, 244, 365, 810, 77, 873, 520, 876, 586, 972, 838, 788, 72, 945, 212, 931, 299, 964, 555, 624, 925, 863, 89, 955, 391, 500, 807, 140, 397, 922, 752, 195, 259, 78, 371, 538, 656, 917, 458, 281, 479, 747, 557, 649, 428, 680, 991, 243, 780, 27, 314, 118, 129, 672, 566, 465, 654, 884, 279, 770, 3, 680, 803, 584, 588, 285, 13, 804, 998, 796, 48, 689, 881, 386, 378, 676, 516, 282, 105, 427, 719, 338, 862, 915, 45, 783, 891, 756, 99, 777, 971, 37, 576, 890, 78, 994, 920, 39, 119, 432, 895, 592, 220, 832, 24, 249, 997, 290, 600, 810, 656, 125, 859, 75, 552, 4, 472, 326, 567, 840, 725, 266, 751, 556, 501, 895, 405, 998, 707, 834, 67, 127, 935, 568, 359, 266, 2, 3, 404, 466, 309, 361, 871, 105, 681, 624, 293, 498, 345, 113, 672, 723, 26, 593, 335, 682, 960, 984, 541, 777, 356, 204, 377, 186, 179, 899, 888, 436, 199, 453, 104, 787, 617, 277, 631, 686, 746, 52, 997, 959, 349, 894, 43, 513, 160, 542, 552, 348, 722, 284, 25, 118, 679, 560, 705, 751, 560, 220, 385, 555, 425, 622, 684, 400, 594, 72, 962, 655, 466, 747, 865, 393, 398, 428, 850, 721, 273, 653, 462, 346, 188, 307, 825, 275, 394, 102, 274, 581, 414, 258, 911, 513, 351, 756, 122, 690, 926, 499, 118, 644, 179, 541, 775, 361, 979, 67, 21, 700, 387, 963, 124, 141, 241, 255, 977, 608, 908, 617, 769, 279, 787, 572, 646, 436, 800, 266, 734, 179, 874, 444, 644, 370, 557, 184, 511, 425, 73, 485, 936, 288, 539, 534, 330, 683, 171, 490, 241, 866, 892, 476, 481, 538, 426, 705, 576, 243, 833, 144, 414, 914, 470, 550, 430, 900, 237, 583, 582, 109, 631, 403, 342, 130, 628, 587, 199, 818, 720, 441, 508, 680, 605, 954, 599, 298, 277, 16, 414, 913, 909, 560, 836, 225, 235, 441, 239, 330, 997, 702, 769, 355, 10, 232, 723, 633, 39, 222, 196, 965, 452, 944, 309, 702, 142, 325, 637, 108, 741, 274, 973, 178, 814, 727, 451, 771, 90, 732, 918, 6, 795, 907, 363, 230, 511, 793, 66, 848, 174, 343, 158, 21, 68, 658, 288, 637, 362, 992, 502, 294, 909, 0, 403, 843, 991, 60, 985, 395, 259, 319, 521, 212, 184, 55, 573, 910, 947, 797, 116, 987, 301, 715, 115, 376, 823, 111, 23, 598, 538, 70, 639, 417, 146, 421, 150, 370, 409, 58, 250, 78, 311, 997, 649, 36, 328, 435, 953, 595, 302, 932, 465, 948, 927, 537, 782, 234, 49, 495, 666, 79, 839, 664, 670, 984, 29, 373, 426, 596, 578, 379, 938, 977, 297, 350, 436, 610, 490, 753, 65, 653, 752, 437, 443, 656, 989, 436, 843, 227, 919, 623, 762, 887, 54, 966, 42, 561, 954, 344, 189, 196, 258, 526, 322, 480, 89, 801, 130, 445, 345, 532, 11, 374, 380, 50, 89, 944, 102, 270, 218, 893, 895, 949, 648, 530, 718, 463, 401, 287, 620, 765, 901, 955, 789, 567, 749, 624, 950, 543, 901, 589, 717, 293, 174, 917, 535, 838, 110, 398, 343, 925, 330, 984, 632, 629, 319, 104, 518, 729, 870, 309, 803, 896, 588, 698, 824, 754, 617, 680, 224, 205, 941, 254, 544, 526, 975, 364, 902, 495, 952, 335, 343, 748, 434, 242, 38, 257, 670, 977, 471, 378, 23, 12, 9, 851, 855, 671, 646, 92, 749, 906, 379, 761, 970, 793, 924, 860, 925, 181, 988, 329, 757, 869, 877, 926, 771, 803, 816, 717, 381, 734, 737, 628, 930, 608, 782, 500, 705, 775, 116, 409, 381, 418, 796, 768, 68, 297, 109, 193, 403, 979, 585, 387, 136, 119, 934, 823, 889, 671, 569, 210, 979, 213, 474, 0, 973, 531, 241, 949, 415, 217, 908, 705, 300, 259, 92, 469, 344, 117, 921, 999, 368, 473, 313, 225, 899, 604, 636, 351, 697, 796, 150, 607, 758, 676, 387, 390, 458, 917, 283, 277, 329, 858, 584, 514, 480, 563, 769, 513, 802, 271, 24, 883, 403, 359, 388, 245, 10, 760, 784, 593, 623, 957, 843, 401, 60, 896, 631, 19, 555, 955, 323, 461, 265, 391, 692, 706, 543, 137, 28, 486, 764, 947, 385, 269, 378, 537, 389, 517, 914, 383, 741, 456, 416, 383, 889, 947, 544, 90, 496, 508, 714, 513, 198, 424, 529, 298, 66, 270, 45, 444, 681, 496, 189, 72, 888, 89, 683, 890, 523, 400, 183, 312, 601, 646, 704, 254, 910, 534, 860, 886, 284, 833, 937, 19, 972, 194, 842, 823, 27, 692, 192, 332, 56, 814, 909, 373, 828, 804, 318, 388, 85, 429, 717, 888, 434, 558, 460, 954, 500, 577, 331, 973, 917, 646, 751, 581, 79, 66, 708, 488, 847, 345, 841, 25, 746, 273, 654, 458, 357, 376, 973, 387, 968, 957, 474, 255, 327, 564, 903, 283, 757, 813, 759, 304, 16, 323, 374, 905, 11, 277, 436, 58, 71, 87, 497, 143, 957, 35, 192, 753, 697, 375, 505, 386, 635, 980, 599, 18, 616, 815, 463, 388, 982, 849, 664, 798, 764, 489, 647, 577, 428, 582, 782, 928, 615, 538, 324, 208, 655, 980, 613, 452, 824, 193, 832, 104, 110, 832, 323, 277, 944, 329, 144, 190, 409, 519, 419, 180, 217, 48, 549, 173, 835, 126, 394, 387, 404, 872, 409, 2, 228, 982, 927, 647, 46, 540, 728, 556, 321, 931, 335, 828, 919, 617, 211, 157, 569, 801, 974, 952, 276, 686, 712, 900, 64, 43, 882, 373, 312, 832, 575, 988, 938, 233, 965, 539, 445, 730, 487, 808, 773, 775, 236, 145, 101, 652, 906, 109, 654, 933, 815, 896, 128, 27, 723, 625, 627, 265, 740, 560, 799, 204, 814, 110, 285, 841, 346, 949, 389, 557, 957, 878, 232, 63, 146, 449, 383, 348, 759, 815, 387, 61, 590, 238, 392, 470, 350, 246, 165, 255, 441, 388, 618, 337, 517, 911, 427, 311, 328, 287, 343, 544, 773, 26, 787, 763, 95, 669, 758, 666, 155, 990, 382, 855, 993, 454, 785, 25, 532, 114, 897, 313, 901, 729, 571, 971, 945, 484, 584, 15, 835, 494, 429, 10, 364, 484, 291, 886, 833, 779, 345, 323, 473, 679, 884, 660, 918, 208, 402, 222, 179, 742, 243, 388, 460, 157, 893, 234, 96, 888, 245, 343, 684, 729, 451, 174, 926, 678, 474, 443, 310, 524, 256, 254, 438, 162, 202, 310, 802, 954, 386, 839, 403, 86, 468, 180, 601, 222, 240, 269, 148, 427, 19, 924, 343, 316, 158, 137, 839, 348, 957, 912, 97, 443, 194, 380, 71, 84, 704, 759, 476, 634, 347, 459, 936, 730, 305, 746, 560, 158, 516, 567, 479, 534, 404, 889, 509, 158, 135, 906, 265, 287, 176, 736, 223, 708, 903, 191, 71, 611, 702, 563, 930, 580, 391, 519, 664, 835, 386, 230, 778, 540, 848, 914, 653, 64, 362, 975, 561, 79, 997, 421, 547, 213, 640, 889, 986, 40, 831, 146, 70, 251, 584, 868, 968, 728, 452, 974, 165, 861, 787, 757, 817, 4, 787, 681, 359, 232, 632, 868, 528, 671, 356, 335, 573, 776, 314, 153, 231, 35, 942, 921, 911, 763, 718, 23, 576, 680, 93, 444, 698, 187, 614, 572, 654, 873, 17, 498, 506, 847, 655, 361, 969, 960, 169, 911, 925, 551, 322, 69, 303, 912, 388, 611, 596, 634, 184, 826, 486, 705, 498, 49, 305, 228, 909, 414, 558, 783, 443, 941, 199, 975, 194, 564, 855, 560, 91, 462, 221, 789, 588, 465, 879, 948, 21, 283, 440, 869, 534, 85, 968, 104, 126, 294, 726, 490, 629, 251, 33, 884, 433, 336, 241, 71, 972, 421, 414, 909, 710, 122, 793, 774, 855, 890, 249, 43, 199, 400, 686, 722, 489, 145, 270, 462, 718, 529, 995, 931, 732, 35, 840, 935, 255, 924, 768, 235, 407, 94, 647, 460, 511, 685, 696, 200, 83, 586, 610, 46, 33, 761, 620, 275, 405, 936, 942, 640, 164, 471, 952, 939, 34, 505, 86, 718, 641, 311, 386, 691, 471, 635, 239, 245, 959, 390, 335, 869, 98, 575, 462, 310, 330, 632, 540, 892, 685, 439, 376, 616, 583, 92, 882, 826, 172, 502, 360, 421, 590, 925, 408, 764, 986, 305, 662, 208, 810, 74, 659, 855, 217, 295, 770, 19, 379, 306, 867, 616, 453, 367, 715, 261, 728, 940, 349, 604, 815, 650, 174, 293, 263, 373, 896, 689, 199, 846, 938, 682, 50, 625, 562, 691, 550, 14, 387, 432, 989, 754, 579, 831, 994, 959, 707, 990, 718, 424, 931, 317, 794, 267, 215, 318, 818, 859, 726, 759, 183, 917, 580, 585, 341, 575, 697, 147, 445, 343, 783, 134, 303, 268, 618, 585, 113, 225, 73, 175, 81, 349, 857, 950, 667, 181, 450, 517, 447, 917, 540, 464, 924, 671, 962, 982, 536, 141, 625, 123, 521, 250, 618, 390, 378, 701, 364, 795, 2, 31, 842, 79, 809, 288, 225, 172, 710, 542, 260, 76, 196, 304, 157, 803, 247, 211, 127, 58, 709, 73, 630, 862, 53, 219, 977, 866, 476, 186, 607, 381, 844, 135, 393, 973, 594, 547, 153, 589, 79, 493, 60, 306, 240, 178, 491, 383, 237, 623, 590, 848, 576, 720, 257, 262, 835, 620, 834, 600, 565, 626, 828, 27, 566, 349, 44, 880, 235, 433, 733, 535, 559, 73, 53, 728, 756, 272, 759, 253, 965, 920, 839, 385, 487, 151, 219, 555, 413, 522, 269, 673, 4, 269, 99, 141, 698, 451, 790, 720, 707, 35, 855, 49, 435, 338, 556, 506, 506, 849, 651, 601, 622, 722, 460, 24, 335, 537, 638, 321, 835, 534, 543, 511, 273, 924, 168, 164, 149, 992, 407, 699, 831, 7, 854, 941, 837, 517, 541, 503, 835, 127, 155, 626, 826, 235, 831, 251, 963, 556, 800, 45, 683, 775, 193, 977, 564, 691, 973, 576, 638, 177, 830, 789, 665, 558, 365, 589, 765, 902, 209, 427, 986, 732, 897, 138, 813, 75, 569, 979, 132, 384, 645, 405, 560, 82, 360, 905, 459, 894, 574, 815, 380, 402, 940, 658, 419, 403, 913, 268, 102, 817, 143, 44, 616, 921, 292, 616, 273, 438, 480, 622, 964, 111, 62, 904, 409, 416, 17, 823, 379, 261, 232, 551, 804, 295, 265, 944, 544, 398, 224, 822, 417, 396, 148, 511, 7, 173, 182, 252, 415, 400, 972, 347, 18, 983, 809, 152, 553, 238, 11, 576, 127, 135, 864, 276, 414, 819, 751, 841, 579, 14, 327, 391, 505, 104, 662, 867, 672, 439, 773, 330, 972, 408, 512, 383, 454, 69, 188, 84, 585, 827, 356, 140, 854, 323, 9, 913, 440, 943, 583, 161, 650, 476, 206, 381, 247, 921, 687, 656, 24, 400, 445, 172, 944, 384, 663, 748, 663, 412, 119, 294, 834, 284, 100, 746, 233, 379, 38, 268, 440, 503, 7, 51, 155, 773, 92, 465, 351, 355, 317, 605, 870, 621, 506, 648, 347, 319, 809, 696, 687, 137, 388, 260, 632, 141, 271, 851, 752, 102, 518, 388, 282, 921, 933, 973, 729, 601, 565, 251, 183, 800, 608, 42, 425, 31, 931, 504, 153, 680, 199, 982, 457, 186, 320, 915, 38, 119, 963, 949, 635, 331, 214, 264, 699, 742, 318, 387, 725, 206, 584, 397, 387, 455, 454, 768, 256, 858, 232, 192, 931, 225, 578, 971, 483, 878, 109, 264, 332, 823, 243, 482, 9, 488, 474, 481, 329, 331, 292, 829, 14, 555, 967, 815, 319, 64, 755, 863, 112, 746, 640, 916, 385, 805, 234, 349, 78, 716, 687, 595, 169, 974, 886, 213, 610, 398, 636, 329, 905, 378, 796, 53, 666, 630, 282, 984, 558, 54, 993, 737, 757, 799, 902, 332, 605, 259, 115, 396, 983, 645, 363, 237, 476, 566, 733, 682, 386, 487, 94, 774, 348, 642, 302, 952, 124, 762, 421, 858, 120, 326, 903, 799, 935, 172, 367, 996, 277, 63, 964, 483, 131, 431, 243, 652, 114, 791, 601, 941, 369, 719, 683, 346, 607, 460, 824, 627, 30, 365, 182, 863, 846, 111, 976, 266, 412, 938, 438, 596, 539, 242, 346, 632, 640, 100, 475, 132, 615, 529, 881, 349, 978, 406, 474, 498, 512, 817, 548, 905, 340, 648, 811, 72, 795, 180, 270, 122, 791, 235, 666, 719, 332, 481, 138, 255, 500, 450, 228, 589, 854, 410, 239, 343, 855, 757, 904, 927, 49, 44, 681, 507, 338, 702, 676, 968, 399, 835, 874, 342, 477, 422, 361, 60, 239, 789, 342, 146, 377, 833, 640, 941
};
double input_data_x[COL_SIZE] = 
{
437, 416, 772, 572, 25, 858, 341, 172, 7, 571, 599, 819, 19, 251, 842, 423, 463, 877, 655, 323, 81, 794, 906, 663, 549, 828, 985, 231, 404, 524, 904, 98, 566, 15, 800, 263, 697, 734, 596, 386, 344, 603, 721, 979, 858, 512, 838, 40, 900, 24
};
double output_data_y[ROW_SIZE] = 
{
11884993, 12152002, 14018312, 14927083, 11848705, 11947466, 13810860, 12877554, 12331204, 13470893, 13517428, 10964254, 12859398, 13099248, 11396956, 11606601, 14060366, 14032037, 13325199, 14590830, 12191741, 13353578, 12040391, 13052650, 15242800, 13991154, 12464931, 12119529, 13670780, 14966298, 14399048, 12850609, 12563906, 13169166, 12763425, 12014612, 13178221, 13544965, 13173990, 15868211, 13663766, 13659873, 9449403, 13471799, 11923398, 12840890, 12921337, 13306006, 13522375, 14546533, 12644073, 12224890, 12938298, 11559971, 13414351, 15407810, 13165084, 13347679, 16368436, 14140379, 12114578, 13299799, 12718430, 12675183, 12551630, 11546349, 12164264, 12673470, 14599407, 15271655, 14254321, 12386912, 11891133, 13861565, 12548944, 13840153, 16131995, 11421877, 13785263, 12256307, 12723961, 14851684, 13884907, 13624183, 13640573, 13718329, 15457166, 12706197, 9878066, 13072597, 14539386, 15972793, 10544617, 12049611, 9701065, 12971201, 14441027, 14287062, 13617828, 12992654
};

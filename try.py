# -*- coding: utf-8 -*-
"""
正向最大匹配算法（FMM）中文分词演示
不依赖任何第三方库，自带约20个词的小词典
"""

def fmm(sentence, dictionary, max_len):
    """
    正向最大匹配分词
    :param sentence: str, 待分词的中文句子
    :param dictionary: set, 词典（词集合）
    :param max_len: int, 词典中最长词的长度
    :return: list, 分词结果（词序列）
    """
    result = []                # 存放切分出的词语
    index = 0                  # 当前处理位置的指针
    sentence_len = len(sentence)

    while index < sentence_len:
        matched = False
        # 从最大长度开始尝试匹配，逐次减一字
        for length in range(max_len, 0, -1):
            if index + length > sentence_len:
                continue       # 剩余字符不足当前长度，跳过
            sub_str = sentence[index:index + length]   # 候选子串
            if sub_str in dictionary:
                result.append(sub_str)   # 匹配成功，加入结果
                index += length          # 指针后移该词长度
                matched = True
                break                    # 跳出长度循环，继续下一轮
        # 如果词典中没有匹配，则按单字切分
        if not matched:
            result.append(sentence[index])
            index += 1

    return result


if __name__ == "__main__":
    # 小词典（约20个词），包含题目要求的“研究”“研究生”“生活”“秘密”“的”等
    word_list = [
        "研究", "研究生", "生活", "秘密", "的",
        "前面", "好大", "一只", "猪",
        "我", "你", "他", "她", "我们",
        "学习", "工作", "喜欢", "非常",
        "今天", "明天"
    ]
    # 转换为集合，方便快速查找
    dictionary = set(word_list)

    # 设置 MaxLen：词典中最长词的长度
    max_len = max(len(w) for w in dictionary)
    print(f"词典中最长词长度 MaxLen = {max_len}")

    # 测试句子1
    sentence1 = "研究生活的秘密"
    result1 = fmm(sentence1, dictionary, max_len)
    print(f"句子1: {sentence1}")
    print(f"分词结果: {'/'.join(result1)}\n")

    # 测试句子2
    sentence2 = "前面好大一只猪"
    result2 = fmm(sentence2, dictionary, max_len)
    print(f"句子2: {sentence2}")
    print(f"分词结果: {'/'.join(result2)}")
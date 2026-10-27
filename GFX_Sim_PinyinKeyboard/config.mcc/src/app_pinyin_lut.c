/*******************************************************************************
  Pinyin Lookup Table

  File Name:
    app_pinyin_lut.c

  Summary:
    Grouped PinyinMap table. Each row covers one base syllable (tone-stripped).
    Characters in 'chars' are limited to glyphs that exist in Font0 so they
    render correctly without needing a font change.

    Table is sorted ascending by 'pinyin' to allow early-exit prefix scan.

  To add a character:
    1. Add its glyph codepoint to Font0 in MGS Composer and regenerate.
    2. Find the matching row (or add a new row in sorted order).
    3. Append the UTF-8 bytes to that row's 'chars' string.
*******************************************************************************/

#include "app_pinyin_lut.h"
#include <string.h>

const PinyinMap pinyinLookupTable[] = {
    /* a */
    {"a",      "阿"},
    {"ai",     "艾"},
    {"an",     "鹌案"},
    /* b */
    {"ba",     "拔扒八坝把"},
    {"bai",    "白百"},
    {"ban",    "拌瓣"},
    {"bang",   "棒蚌"},
    {"bao",    "爆鲍煲保包薄"},
    {"bei",    "贝北杯"},
    {"ben",    "本"},
    {"bi",     "毕荸碧"},
    {"bian",   "扁边"},
    {"bing",   "饼冰"},
    {"bo",     "卜菠钵波博玻勃"},
    {"bu",     "补"},
    /* c */
    {"cai",    "菜"},
    {"can",    "餐"},
    {"cao",    "草曹"},
    {"cha",    "茶叉插"},
    {"chai",   "柴"},
    {"chang",  "肠常"},
    {"chao",   "炒潮巢"},
    {"chen",   "陈"},
    {"cheng",  "橙"},
    {"chi",    "翅豉"},
    {"chong",  "虫"},
    {"chou",   "抽"},
    {"chu",    "厨储"},
    {"chuan",  "串川传"},
    {"chun",   "鹑春椿"},
    {"ci",     "刺瓷"},
    {"cong",   "葱"},
    {"cu",     "醋粗"},
    {"cui",    "脆翠"},
    {"cun",    "寸"},
    /* d */
    {"da",     "大"},
    {"dai",    "带"},
    {"dan",    "担蛋单胆"},
    {"dang",   "当档"},
    {"dao",    "刀稻"},
    {"de",     "德"},
    {"deng",   "灯"},
    {"di",     "地底"},
    {"dian",   "点店典"},
    {"ding",   "丁顶鼎"},
    {"dong",   "冻冬"},
    {"dou",    "豆兜"},
    {"du",     "肚"},
    {"dun",    "炖"},
    {"duo",    "剁多垛"},
    /* e */
    {"e",      "鹅"},
    {"er",     "耳二"},
    /* f */
    {"fa",     "发法"},
    {"fan",    "饭番翻"},
    {"fang",   "方房"},
    {"fei",    "肺费"},
    {"fen",    "份粉"},
    {"feng",   "风枫丰峰"},
    {"fu",     "腐附福釜富"},
    /* g */
    {"gan",    "肝干甘"},
    {"gang",   "港"},
    {"gao",    "糕膏高"},
    {"ge",     "鸽蛤葛"},
    {"gen",    "根"},
    {"geng",   "羹"},
    {"gong",   "宫"},
    {"gou",    "枸"},
    {"gu",     "骨菇古谷"},
    {"gua",    "挂瓜"},
    {"guan",   "馆罐"},
    {"guang",  "广"},
    {"gui",    "桂贵龟"},
    {"gun",    "滚"},
    {"guo",    "锅果国"},
    /* h */
    {"hai",    "海"},
    {"han",    "韩汉寒"},
    {"hao",    "蚝好"},
    {"he",     "盒荷和合黑核"},
    {"hong",   "红烘"},
    {"hou",    "厚猴"},
    {"hu",     "沪胡湖葫琥糊"},
    {"hua",    "花"},
    {"huai",   "淮怀"},
    {"huan",   "换鲩"},
    {"huang",  "黄"},
    {"hui",    "烩徽"},
    {"hun",    "馄"},
    {"huo",    "火霍"},
    /* j */
    {"ji",     "鸡脊级基蓟吉鲫"},
    {"jia",    "家甲加"},
    {"jian",   "煎尖健建"},
    {"jiang",  "酱姜江"},
    {"jiao",   "椒饺焦酵角胶浇茭"},
    {"jie",    "芥"},
    {"jin",    "斤金津浸筋"},
    {"jing",   "精京"},
    {"jiu",    "九酒久韭"},
    {"ju",     "焗橘局巨"},
    {"juan",   "卷"},
    {"jun",    "菌"},
    /* k */
    {"ka",     "咖卡"},
    {"kai",    "开"},
    {"kan",    "侃"},
    {"kao",    "烤"},
    {"ke",     "客科克可"},
    {"kou",    "扣"},
    {"ku",     "苦"},
    {"kuai",   "块快筷"},
    /* l */
    {"la",     "辣拉蜡"},
    {"lai",    "莱来"},
    {"lan",    "兰蓝"},
    {"lang",   "朗"},
    {"lao",    "老捞"},
    {"le",     "乐"},
    {"leng",   "冷"},
    {"li",     "里喱栗粒例梨礼黎荔"},
    {"lian",   "莲"},
    {"liang",  "两凉"},
    {"liao",   "料"},
    {"lin",    "淋"},
    {"ling",   "菱"},
    {"liu",    "溜六柳"},
    {"long",   "龙笼"},
    {"lou",    "楼"},
    {"lu",     "卤鲁芦露鹿"},
    {"luo",    "萝螺"},
    {"lv",     "绿滤"},
    /* m */
    {"ma",     "麻马码"},
    {"mai",    "麦卖买"},
    {"man",    "馒鳗"},
    {"mang",   "芒"},
    {"mei",    "梅莓"},
    {"men",    "焖"},
    {"mi",     "米秘蜜"},
    {"mian",   "面免棉"},
    {"miao",   "苗妙"},
    {"min",    "闽"},
    {"mo",     "墨末抹"},
    {"mou",    "某"},
    {"mu",     "木母"},
    /* n */
    {"na",     "拿"},
    {"nai",    "奶"},
    {"nan",    "南"},
    {"nei",    "内"},
    {"nen",    "嫩"},
    {"ni",     "泥"},
    {"niang",  "酿"},
    {"niao",   "鸟"},
    {"ning",   "柠"},
    {"niu",    "牛纽"},
    {"nong",   "农浓"},
    /* o */
    {"ou",     "藕"},
    /* p */
    {"pai",    "排牌派"},
    {"pan",    "盘泮"},
    {"pang",   "螃"},
    {"pao",    "泡炮"},
    {"pei",    "培佩"},
    {"peng",   "烹"},
    {"pian",   "片"},
    {"piao",   "漂"},
    {"pin",    "拼品"},
    {"ping",   "瓶平"},
    {"po",     "婆"},
    {"pu",     "蒲葡朴"},
    /* q */
    {"qi",     "七杞齐"},
    {"qian",   "千芡茜前"},
    {"qiang",  "炝"},
    {"qiao",   "巧荞"},
    {"qie",    "茄"},
    {"qin",    "芹"},
    {"qing",   "清"},
    {"qiu",    "秋球"},
    {"qu",     "曲"},
    {"quan",   "全泉"},
    /* r */
    {"ran",    "然"},
    {"re",     "热"},
    {"ren",    "仁人"},
    {"rong",   "茸蓉"},
    {"rou",    "肉"},
    {"ru",     "乳如"},
    /* s */
    {"sa",     "撒萨"},
    {"san",    "三散"},
    {"sang",   "桑"},
    {"se",     "色"},
    {"sha",    "沙"},
    {"shan",   "山"},
    {"shao",   "烧"},
    {"she",    "舌"},
    {"shen",   "参葚"},
    {"sheng",  "生胜升"},
    {"shi",    "式十石柿"},
    {"shu",    "薯"},
    {"shuan",  "涮"},
    {"shuang", "双霜爽"},
    {"shui",   "水睡"},
    {"si",     "丝四司"},
    {"song",   "松送"},
    {"su",     "素酥苏"},
    {"suan",   "蒜酸狻"},
    {"sui",    "碎穗髓"},
    {"sun",    "笋"},
    /* t */
    {"tai",    "苔台泰"},
    {"tan",    "炭摊坛"},
    {"tang",   "烫汤糖"},
    {"tao",    "桃"},
    {"te",     "特"},
    {"ti",     "蹄"},
    {"tian",   "甜田"},
    {"tiao",   "条"},
    {"tie",    "贴"},
    {"ting",   "婷艇"},
    {"tong",   "统筒铜"},
    {"tou",    "头"},
    {"tu",     "土兔"},
    {"tuan",   "团"},
    {"tun",    "饨"},
    /* w */
    {"wa",     "娃蛙"},
    {"wan",    "碗丸"},
    {"wang",   "王网"},
    {"wei",    "煨味微尾"},
    {"wen",    "温"},
    {"wo",     "窝"},
    {"wu",     "五乌物"},
    /* x */
    {"xi",     "西喜细"},
    {"xia",    "虾"},
    {"xian",   "咸鲜馅仙纤蚬"},
    {"xiang",  "香湘箱响"},
    {"xiao",   "小削销宵"},
    {"xie",    "蟹"},
    {"xin",    "心新"},
    {"xing",   "杏星"},
    {"xiong",  "熊"},
    {"xu",     "须徐"},
    {"xuan",   "选"},
    {"xue",    "雪"},
    {"xun",    "熏鲟"},
    /* y */
    {"ya",     "鸭压芽雅崖"},
    {"yan",    "腌盐燕眼"},
    {"yang",   "羊洋"},
    {"yao",    "腰药"},
    {"ye",     "野叶夜"},
    {"yi",     "意一薏"},
    {"yin",    "银饮"},
    {"ying",   "樱鹰"},
    {"you",    "鱿油柚幽"},
    {"yu",     "鱼芋玉"},
    {"yuan",   "元圆鸳"},
    {"yue",    "粤越"},
    /* z */
    {"za",     "杂"},
    {"zai",    "仔"},
    {"zan",    "咱"},
    {"zao",    "糟"},
    {"zeng",   "甑"},
    {"zha",    "炸"},
    {"zhan",   "蘸盏斩"},
    {"zhang",  "掌张"},
    {"zhao",   "招"},
    {"zhe",    "浙蔗蜇"},
    {"zhen",   "真珍胗"},
    {"zheng",  "蒸"},
    {"zhi",    "芝制汁脂炙"},
    {"zhong",  "中钟"},
    {"zhou",   "粥州"},
    {"zhu",    "煮猪珠竹"},
    {"zhua",   "抓"},
    {"zhuo",   "焯"},
    {"zi",     "孜子紫"},
    {"zong",   "粽"},
};

const size_t pinyinLookupTableSize =
    sizeof(pinyinLookupTable) / sizeof(pinyinLookupTable[0]);

// ---------------------------------------------------------------------------
// Advance one UTF-8 character
// ---------------------------------------------------------------------------
static const char* utf8Next(const char* p)
{
    const unsigned char* s = (const unsigned char*)p;
    if      (*s < 0x80) s += 1;
    else if (*s < 0xE0) s += 2;
    else if (*s < 0xF0) s += 3;
    else                s += 4;
    return (const char*)s;
}

// ---------------------------------------------------------------------------
// findPinyinMatches
// Scans for rows whose 'pinyin' starts with 'prefix'.
// Breaks early once rows are lexically past the prefix (table is sorted).
// ---------------------------------------------------------------------------
int findPinyinMatches(const char* prefix, const char** results, int maxResults)
{
    size_t i;
    int    count     = 0;
    size_t prefixLen = strlen(prefix);

    if (prefixLen == 0)
        return 0;

    for (i = 0; i < pinyinLookupTableSize && count < maxResults; i++)
    {
        int cmp = strncmp(pinyinLookupTable[i].pinyin, prefix, prefixLen);
        if (cmp > 0) break;
        if (cmp < 0) continue;

        const char* p = pinyinLookupTable[i].chars;
        while (*p && count < maxResults)
        {
            results[count++] = p;
            p = utf8Next(p);
        }
    }
    return count;
}

// ---------------------------------------------------------------------------
// findPinyinMatch — returns first matching character, or NULL
// ---------------------------------------------------------------------------
const char* findPinyinMatch(const char* input)
{
    const char* result;
    if (findPinyinMatches(input, &result, 1) > 0)
        return result;
    return NULL;
}

void APP_PINYIN_LUT_Initialize(void) {}

void APP_PINYIN_LUT_Tasks(void) {}

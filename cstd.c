#include "cstd.h"

/* allocate a 1-d array */
void *alloc1(size_t n1, size_t size)
{
    void *p;

    if ((p = malloc(n1 * size)) == NULL)
        err("alloc failed");
    return p;
}
/* re-allocate a 1-d array */
void *realloc1(void *v, size_t n1, size_t size)
{
    void *p;
    if ((p = realloc(v, n1 * size)) == NULL)
        err("realloc failed");
    return p;
}
/* free a 1-d array */
void free1(void *p)
{
    free(p);
}

/* allocate a 2-d array */
void **alloc2(size_t n1, size_t n2, size_t size)
{
    size_t i2;
    void **p;
    p = (void **)alloc1(n2, sizeof(void *));
    p[0] = (void *)alloc1(n2 * n1, size);
    for (i2 = 0; i2 < n2; i2++)
        p[i2] = (char *)p[0] + size * n1 * i2;
    return p;
}
/* free a 2-d array */
void free2(void **p)
{
    free(p[0]);
    free(p);
}

/* allocate a 1-d array of ints */
int *alloc1int(size_t n1)
{
    return (int *)alloc1(n1, sizeof(int));
}

/* re-allocate a 1-d array of ints */
int *realloc1int(int *v, size_t n1)
{
    return (int *)realloc1(v, n1, sizeof(int));
}
/* free a 1-d array of ints */
void free1int(int *p)
{
    free1(p);
}

/* allocate a 2-d array of ints */
int **alloc2int(size_t n1, size_t n2)
{
    return (int **)alloc2(n1, n2, sizeof(int));
}
/* free a 2-d array of ints */
void free2int(int **p)
{
    free2((void **)p);
}

/* allocate a 1-d array of floats */
float *alloc1float(size_t n1)
{
    return (float *)alloc1(n1, sizeof(float));
}

/* re-allocate a 1-d array of floats */
float *realloc1float(float *v, size_t n1)
{
    return (float *)realloc1(v, n1, sizeof(float));
}

/* free a 1-d array of floats */
void free1float(float *p)
{
    free1(p);
}

/* allocate a 2-d array of floats */
float **alloc2float(size_t n1, size_t n2)
{
    return (float **)alloc2(n1, n2, sizeof(float));
}

/* free a 2-d array of floats */
void free2float(float **p)
{
    free2((void **)p);
}

/* allocate a 1-d array of doubles */
double *alloc1double(size_t n1)
{
    return (double *)alloc1(n1, sizeof(double));
}

/* re-allocate a 1-d array of doubles */
double *realloc1double(double *v, size_t n1)
{
    return (double *)realloc1(v, n1, sizeof(double));
}

/* free a 1-d array of doubles */
void free1double(double *p)
{
    free1(p);
}

/* allocate a 2-d array of doubles */
double **alloc2double(size_t n1, size_t n2)
{
    return (double **)alloc2(n1, n2, sizeof(double));
}

/* free a 2-d array of doubles */
void free2double(double **p)
{
    free2((void **)p);
}

/* allocate a 1-d array of complexs */
cpx *alloc1complexf(size_t n1)
{
    return (cpx *)alloc1(n1, sizeof(cpx));
}

/* re-allocate a 1-d array of complexs */
cpx *realloc1complexf(cpx *v, size_t n1)
{
    return (cpx *)realloc1(v, n1, sizeof(cpx));
}

/* free a 1-d array of complexs */
void free1complexf(cpx *p)
{
    free1(p);
}

/* allocate a 2-d array of complexs */
cpx **alloc2complexf(size_t n1, size_t n2)
{
    return (cpx **)alloc2(n1, n2, sizeof(cpx));
}

/* free a 2-d array of complexs */
void free2complexf(cpx **p)
{
    free2((void **)p);
}

/* allocate a 1-d array of complexs */
zpx *alloc1complex(size_t n1)
{
    return (zpx *)alloc1(n1, sizeof(zpx));
}

/* re-allocate a 1-d array of complexs */
zpx *realloc1complex(zpx *v, size_t n1)
{
    return (zpx *)realloc1(v, n1, sizeof(zpx));
}

/* free a 1-d array of complexs */
void free1complex(zpx *p)
{
    free1(p);
}

/* allocate a 2-d array of complexs */
zpx **alloc2complex(size_t n1, size_t n2)
{
    return (zpx **)alloc2(n1, n2, sizeof(zpx));
}

/* free a 2-d array of complexs */
void free2complex(zpx **p)
{
    free2((void **)p);
}

//============================================================
/* allocate a 1-d array of chars */
char *alloc1char(size_t n1)
{
    return (char *)alloc1(n1, sizeof(char));
}

/* re-allocate a 1-d array of chars */
char *realloc1char(char *v, size_t n1)
{
    return (char *)realloc1(v, n1, sizeof(char));
}

/* free a 1-d array of chars */
void free1char(char *p)
{
    free1(p);
}

/* eatoh - convert string s to short integer {SHRT_MIN:SHRT_MAX} */
short eatoh(char *s)
{
    long n = strtol(s, NULL, 10);
    return (short)n;
}
/* eatou - convert string s to unsigned short integer {0:USHRT_MAX} */
unsigned short eatou(char *s)
{
    unsigned long n = strtoul(s, NULL, 10);
    return (unsigned short)n;
}
/* eatoi - convert string s to integer {INT_MIN:INT_MAX} */
int eatoi(char *s)
{
    long n = strtol(s, NULL, 10);
    return (int)n;
}
/* eatop - convert string s to unsigned integer {0:UINT_MAX} */
unsigned int eatop(char *s)
{
    unsigned long n = strtoul(s, NULL, 10);
    return (unsigned int)n;
}
/* eatol - convert string s to long integer {LONG_MIN:LONG_MAX} */
long eatol(char *s)
{
    long n = strtol(s, NULL, 10);
    return n;
}
/* eatov - convert string s to unsigned long {0:ULONG_MAX} */
unsigned long eatov(char *s)
{
    unsigned long n = strtoul(s, NULL, 10);
    return n;
}
/* eatof - convert string s to float {-FLT_MAX:FLT_MAX} */
float eatof(char *s)
{
    float x = strtod(s, NULL);
    return (float)x;
}
/* eatod - convert string s to double {-DBL_MAX:DBL_MAX} */
double eatod(char *s)
{
    double x = strtod(s, NULL);
    return x;
}

/* pading for 2D model */
void pad2(const float *x, float *xx, const int nz, const int nx, const int lft, const int rht, const int top, const int bot)
{
    int nxb = nx + lft + rht;
    int nzb = nz + top + bot;
    int i, j;
    for (int ix = lft; ix < nx + lft; ix++)
    {
        /*inner*/
        for (int iz = top; iz < nz + top; iz++)
        {
            i = ix * nzb + iz;
            j = (ix - lft) * nz + (iz - top);
            xx[i] = x[j];
        }
        /*top*/
        j = (ix - lft) * nz;
        for (int iz = 0; iz < top; iz++)
        {
            i = ix * nzb + iz;
            xx[i] = x[j];
        }
        /*bot*/
        j = (ix - lft) * nz + (nz - 1);
        for (int iz = nz + top; iz < nzb; iz++)
        {
            i = ix * nzb + iz;
            xx[i] = x[j];
        }
    }
    for (int iz = 0; iz < nzb; iz++)
    {
        /*left*/
        j = lft * nzb + iz;
        for (int ix = 0; ix < lft; ix++)
        {
            i = ix * nzb + iz;
            xx[i] = xx[j];
        }
        /*right*/
        j = (lft + nx - 1) * nzb + iz;
        for (int ix = lft + nx; ix < nxb; ix++)
        {
            i = ix * nzb + iz;
            xx[i] = xx[j];
        }
    }
}
/* blas function used openblas*/
/* blas2 */
void sscale(int n, float alpha, float *a, float *b)
{
    memcpy(b, a, sizeof(float) * n);
    cblas_sscal(n, alpha, b, 1);
}
float sdot(int n, float *a, float *b)
{
    return cblas_sdot(n, a, 1, b, 1);
}
double ddot(int n, double *a, double *b)
{
    return cblas_ddot(n, a, 1, b, 1);
}
void saxpy(int n, float alpha, float *a, float *b)
{
    cblas_saxpy(n, alpha, a, 1, b, 1);
}
/* blas3 */
void sgemm(int m, int n, int k, float *A, float *B, float *C)
{
    cblas_sgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, m, n, k, 1, A, m, B, k, 0, C, m);
}
void dgemm(int m, int n, int k, double *A, double *B, double *C)
{
    cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, m, n, k, 1, A, m, B, k, 0, C, m);
}

/* ========================================hash map========================================================== */
/* calculate the hash value */
static unsigned int hash(const char *key, int size)
{
    unsigned int h;
    unsigned char *p;
    h = 0;
    for (p = (unsigned char *)key; *p != '\0'; p++)
    {
        h = h * 31 + (int)(*p);
    }
    return (h % size);
}
/* create hash node */
static void node_creat(HashTable table, char *key, char *val)
{
    HashNode node = (HashNode)alloc1(1, sizeof(struct HashNode));
    node->key = key;
    node->value = val;
    node->next = NULL;
    int h = hash(key, table->size);
    node->next = table->table[h];
    table->table[h] = node;
} /* find the node that contains the key */
static HashNode hash_find(HashTable table, char *key)
{
    int h = hash(key, table->size);
    HashNode node = table->table[h];
    exit;
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            break;
        node = node->next;
    }
    return node;
}
/* create hash map */
HashTable hash_creat(int size)
{
    HashTable table = (HashTable)alloc1(1, sizeof(struct HashTable));
    table->size = size;
    table->table = (HashNode *)alloc1(size, sizeof(HashNode));
    for (int i = 0; i < size; i++)
    {
        table->table[i] = NULL;
    }
    return table;
}

void hash_add(HashTable table, char *s /* key=value */)
{
    char *key, *value;
    const char *p = strchr(s, '=');
    if (p == NULL)
        return;
    size_t leftLen = p - s;
    size_t rightLen = strlen(p + 1);
    key = alloc1char(leftLen);
    strncpy(key, s, leftLen);
    key[leftLen] = '\0';
    HashNode e = hash_find(table, key);
    if (e != NULL)
    {
        if (strcmp(p + 1, e->value) != 0)
        {
            value = alloc1char(rightLen);
            strcpy(value, p + 1);
            free(e->value);
            e->value = value;
        }
        free1(key);
    }
    else
    {
        value = alloc1char(rightLen);
        strcpy(value, p + 1);
        node_creat(table, key, value);
    }
}
static void hash_close(HashTable tab)
{
    int n = tab->size;
    HashNode e, nt;
    for (int i = 0; i < n; i++)
    {
        e = tab->table[i];
        while (e != NULL)
        {
            nt = e->next;
            free(e->key);
            free(e->value);
            free(e);
            e = nt;
        }
    }
    free(tab->table);
    free(tab);
}

/* ========================================init function========================================================== */
static char *program;
static HashTable tb;
void init(int argc, char **argv)
{
    program = argv[0];
    tb = hash_creat(argc);
    for (int i = 1; i < argc; i++)
    {
        hash_add(tb, argv[i]);
    }
}
bool getint(const char *key, int *n)
{
    HashNode e = hash_find(tb, key);
    if (e == NULL)
        return false;
    *n = eatoi(e->value);
    return true;
}
bool getfloat(const char *key, float *n)
{
    HashNode e = hash_find(tb, key);
    if (e == NULL)
        return false;
    *n = eatof(e->value);
    return true;
}
bool getdouble(const char *key, double *n)
{
    HashNode e = hash_find(tb, key);
    if (e == NULL)
        return false;
    *n = eatod(e->value);
    return true;
}
bool getstring(const char *key, char **n)
{
    HashNode e = hash_find(tb, key);
    if (e == NULL)
        return false;
    *n = strdup(e->value);
    return true;
}
bool getbool(const char *key, bool *n)
{
    HashNode e = hash_find(tb, key);
    *n = false;
    if (e == NULL)
        return false;
    if (strcmp(e->value, "y") == 0 || strcmp(e->value, "Y") == 0)
    {
        *n = true;
    }
    return true;
}
/* Copyright (c) Colorado School of Mines, 2011.*/
/* All rights reserved.                       */
/* errpkge.c
   err	 print warning on application program error and die
   warn print warning on application program error
   Examples:
   err("Cannot divide %f by %f", x, y);
   warn("fmax = %f exceeds half nyquist= %f", fmax, 0.25/dt);

   if (NULL == (fp = fopen(xargv[1], "r")))
   err("can't open %s", xargv[1]);
   ...
   if (-1 == close(fd))
   err("close failed");
*/
void err(char *fmt, ...)
{
    va_list args;

    if (EOF == fflush(stdout))
    {
        fprintf(stderr, "\nerr: fflush failed on stdout");
    }
    fprintf(stderr, "\n%s: ", program);
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);
    fprintf(stderr, "\n");
    exit(EXIT_FAILURE);
}

void warn(char *fmt, ...)
{
    va_list args;

    if (EOF == fflush(stdout))
    {
        fprintf(stderr, "\nwarn: fflush failed on stdout");
    }
    fprintf(stderr, "\n%s: ", program);
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);
    fprintf(stderr, "\n");
    return;
}

static int countfile = 0;
static file files[20];
file input(const char *tag)
{
    file f = alloc1(1, sizeof(struct file));
    f->write = false;
    f->tb = hash_creat(10);
    char *headname, *dataname;
    if (strcmp(tag, "in") == 0 || strcmp(tag, "input") == 0)
    {
        f->headname = NULL;
        f->head = stdin;
    }
    else
    {
        if (getstring(tag, &headname))
        {
            f->headname = headname;
        }
        else
        {
            headname = strdup(tag);
            f->headname = headname;
        }
        f->head = fopen(headname, "r");
    }
    char s[100];
    while (!feof(f->head))
    {
    }
}
file output(const char *tag)
{
    file f = alloc1(1, sizeof(struct file));
    f->write = true;
}
static void file_close(file f)
{
    if (f == NULL)
        return;
    if (f->dataname != NULL)
    {
        free(f->dataname);
    }
    if (f->headname != NULL)
    {
        free(f->headname);
    }
    if (f->head != NULL)
    {
        fclose(f->head);
    }
    if (f->data != NULL)
    {
        fclose(f->data);
    }
    if (f->tb != NULL)
        hash_close(f->tb);
    free(f);
}
void finalize()
{
    for (int i = 0; i < countfile; i++)
    {
        file_close(files[i]);
    }
    hash_close(tb);
}
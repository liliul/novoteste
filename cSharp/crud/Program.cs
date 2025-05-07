using crud.Data;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Options;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container.
builder.Services.AddControllers();
// Learn more about configuring Swagger/OpenAPI at https://aka.ms/aspnetcore/swashbuckle
builder.Services.AddEndpointsApiExplorer();
builder.Services.AddSwaggerGen();

// --- Configuração do CORS ---
builder.Services.AddCors(options =>
{
    options.AddPolicy("AllowSpecificOrigin", // Nome da sua política
        builder => builder.WithOrigins("http://localhost:8080") // A ORIGEM do seu frontend
            .AllowAnyMethod() // Permite todos os métodos HTTP (GET, POST, PUT, DELETE, etc.)
            .AllowAnyHeader()); // Permite todos os cabeçalhos na requisição
});

var connectionString = builder.Configuration.GetConnectionString("AppDbConnectionString");
builder.Services.AddDbContext<AppDbContext>(options => options.UseMySql(connectionString, ServerVersion.AutoDetect(connectionString)));

var app = builder.Build();

// Configure the HTTP request pipeline.
if (app.Environment.IsDevelopment())
{
    app.UseSwagger();
    app.UseSwaggerUI();
}

app.UseHttpsRedirection();

app.UseAuthorization();

// --- Adicionar o Middleware de CORS ---
app.UseCors("AllowSpecificOrigin");

app.MapControllers();

app.Run();
